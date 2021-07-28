#include <vanetza/asn1/cpm.hpp>
#include <vanetza/facilities/cpm_functions.hpp>
#include <vanetza/facilities/cam_functions.hpp>
#include <vanetza/facilities/path_history.hpp>
#include <vanetza/geonet/areas.hpp>
#include <boost/algorithm/clamp.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <boost/math/constants/constants.hpp>
#include <boost/units/cmath.hpp>
#include <boost/units/systems/si/prefixes.hpp>
#include <boost/units/systems/angle/degrees.hpp>
#include <algorithm>
#include <limits>
#undef min

namespace vanetza {
    namespace facilities {

        // using vanetza::units::Angle;

        // static const auto microdegree = units::degree * units::si::micro;

        // template<typename T, typename U> long round(const boost::units::quantity<T>& q, const U& u) {
        //     boost::units::quantity<U> v { q };
        //     return std::round(v.value());
        // }

        // void copy(const PositionFix& position, ReferencePosition& reference_position) {
        //     reference_position.longitude = round(position.longitude, microdegree) * Longitude_oneMicrodegreeEast;
        //     reference_position.latitude = round(position.latitude, microdegree) * Latitude_oneMicrodegreeNorth;
        //     reference_position.positionConfidenceEllipse.semiMajorOrientation = HeadingValue_unavailable;
        //     reference_position.positionConfidenceEllipse.semiMajorConfidence = SemiAxisLength_unavailable;
        //     reference_position.positionConfidenceEllipse.semiMinorConfidence = SemiAxisLength_unavailable;
        //     if (position.altitude) {
        //         reference_position.altitude.altitudeValue = to_altitude_value(position.altitude->value());
        //         reference_position.altitude.altitudeConfidence = to_altitude_confidence(position.altitude->confidence());
        //     } else {
        //         reference_position.altitude.altitudeValue = AltitudeValue_unavailable;
        //         reference_position.altitude.altitudeConfidence = AltitudeConfidence_unavailable;
        //     }
        // }

        void print_indented(std::ostream& os, const asn1::Cpm& message, const std::string& indent,unsigned level) {
            auto prefix = [&](const char* field) -> std::ostream& {
                for (unsigned i = 0; i < level; ++i) {
                    os << indent;
                }
                os << field << ": ";
                return os;
            };

            const ItsPduHeader_t& header = message->header;
            prefix("ITS PDU Header") << "\n";
            ++level;
            prefix("Protocol Version") << header.protocolVersion << "\n";
            prefix("Message ID") << header.messageID << "\n";
            prefix("Station ID") << header.stationID << "\n";
            --level;

            const CollectivePerceptionMessage_t cpm = message->cpm;
            prefix("CollectivePerception") << "\n";
            ++level;
            prefix("Generation Delta Time") << cpm.generationDeltaTime << "\n";

            prefix("Management Container") << "\n";
            ++level;
            const CpmManagementContainer_t& management = cpm.cpmParameters.managementContainer;
            prefix("Station Type") << management.stationType << "\n";
            prefix("Reference Position") << "\n";
            ++level;
            prefix("Longitude") << management.referencePosition.longitude << "\n";
            prefix("Latitude") << management.referencePosition.latitude << "\n";
            prefix("Semi Major Orientation") << management.referencePosition.positionConfidenceEllipse.semiMajorOrientation << "\n";
            prefix("Semi Major Confidence") << management.referencePosition.positionConfidenceEllipse.semiMajorConfidence << "\n";
            prefix("Semi Minor Confidence") << management.referencePosition.positionConfidenceEllipse.semiMinorConfidence << "\n";
            prefix("Altitude [Confidence]") << management.referencePosition.altitude.altitudeValue
                << " [" << management.referencePosition.altitude.altitudeConfidence << "]\n";
            --level;
            --level;

            if (cpm.cpmParameters.stationDataContainer) {
                prefix("Station Data Container") << "\n";
            }

            if (cpm.cpmParameters.perceptionData) {
                prefix("Perception Data Container") << "\n";
            }
        }
    } // namespace facilities
} // namespace vanetza