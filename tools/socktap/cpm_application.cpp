#include "cpm_application.hpp"
#include <vanetza/btp/ports.hpp>
#include <vanetza/asn1/cpm.hpp>
#include <vanetza/asn1/packet_visitor.hpp>
#include <vanetza/facilities/cpm_functions.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/systems/si/prefixes.hpp>
#include <chrono>
#include <exception>
#include <functional>
#include <iostream>

using namespace vanetza;
using namespace vanetza::facilities;
using namespace std::chrono;

CpmApplication::CpmApplication(PositionProvider& positioning, Runtime& rt) : positioning_(positioning), runtime_(rt), cpm_interval_(seconds(1)) {
        schedule_timer();
}

void CpmApplication::set_interval(Clock::duration interval) {
    cpm_interval_ = interval;
    runtime_.cancel(this);
    schedule_timer();
}

void CpmApplication::print_generated_message(bool flag) {
    print_tx_msg_ = flag;
}

void CpmApplication::print_received_message(bool flag) {
    print_rx_msg_ = flag;
}

CpmApplication::PortType CpmApplication::port() {
    return btp::ports::CPM;
}

void CpmApplication::indicate(const DataIndication& indication, UpPacketPtr packet) {
    asn1::PacketVisitor<asn1::Cpm> visitor;
    std::shared_ptr<const asn1::Cpm> cpm = boost::apply_visitor(visitor, *packet);

    std::cout << "CPM application received a packet with " << (cpm ? "decodable" : "broken") << "content" << std::endl;
    if (cpm && print_rx_msg_) {
        std::cout << "Received CPM contains\n";
        print_indented(std::cout, *cpm, "  ", 1);
    }
}

void CpmApplication::schedule_timer() {
    runtime_.schedule(cpm_interval_, std::bind(&CpmApplication::on_timer, this, std::placeholders::_1), this);
}

void CpmApplication::on_timer(Clock::time_point) {
    schedule_timer();
    vanetza::asn1::Cpm message;

    ItsPduHeader_t& header = message->header;
    header.protocolVersion = 1;
    header.messageID = 14;
    header.stationID = 1;

    const auto time_now = duration_cast<milliseconds> (runtime_.now().time_since_epoch());
    uint16_t gen_delta_time = time_now.count();

    CollectivePerceptionMessage_t& cpm = message->cpm;
    cpm.generationDeltaTime = gen_delta_time * GenerationDeltaTime_oneMilliSec;

    auto position = positioning_.position_fix();

    if (!position.confidence) {
        std::cerr << "Skipping CPM because no good position is available yet." << std::endl;
        return;
    }

    CpmManagementContainer_t& management = cpm.cpmParameters.managementContainer;
    management.stationType = StationType_passengerCar;
    copy(position, management.referencePosition);

    // cpm.cpmParameters.stationDataContainer = NULL;
    // cpm.cpmParameters.perceptionData = NULL;

    std::string error;
    if (!message.validate(error)) {
        throw std::runtime_error("Invalid high frequency CPM: %s" + error);
    }

    if (print_tx_msg_) {
        std::cout << "Generated CPM contains\n";
        print_indented(std::cout, message, "  ", 1);
    }

    DownPacketPtr packet { new DownPacket() };
    packet->layer(OsiLayer::Application) = std::move(message);

    DataRequest request;
    request.its_aid = aid::CP;
    request.transport_type = geonet::TransportType::SHB;
    request.communication_profile = geonet::CommunicationProfile::ITS_G5;

    auto confirm = Application::request(request, std::move(packet));
    if (!confirm.accepted()) {
        throw std::runtime_error("CPM application data request failed");
    }
}