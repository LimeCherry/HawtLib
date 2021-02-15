#pragma once
#include <string>

namespace HawtLib {
    namespace HawtCrypto {

        // modernization of the hashing algorithm djb2
        size_t DJB2(const std::string& str);
	}
}