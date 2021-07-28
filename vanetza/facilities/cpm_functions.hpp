#include <vanetza/asn1/its/ReferencePosition.h>
#include <vanetza/common/position_fix.hpp>
#include <vanetza/facilities/cam_functions.hpp>

namespace vanetza
{

    namespace asn1 { class Cpm; }

    namespace facilities {

        // /**
        //  * Copy position information into a ReferencePosition structure from CDD
        //  * \param position Defined within Vanetza
        //  * \param reference_position Defined in ITS-Container
        //  */
        // void copy(const PositionFix& position, ReferencePosition& reference_position);

        void print_indented(std::ostream& os, const asn1::Cpm& cpm, const std::string& indent = "\t",unsigned start = 0);

    } // namespace facilities
} // namespace vanetza