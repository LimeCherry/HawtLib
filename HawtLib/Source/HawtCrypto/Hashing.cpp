#include "Hashing.h"

// modernization of the hashing algorithm djb2
unsigned long long HawtLib::HawtCrypto::DJB2(const std::string& str) {
    unsigned long long hashValue = 5381;
    for (char c : str) {
        hashValue = ((hashValue << 5) + hashValue) + c;
    }
    return hashValue;
}
