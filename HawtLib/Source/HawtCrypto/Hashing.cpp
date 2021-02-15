#include "Hashing.h"

// modernization of the hashing algorithm djb2
unsigned long long HawtLib::HawtCrypto::DJB2(const std::string& str) {
    unsigned long long hashValue = 5381;
    for (char c : str) {
        hashValue = ((hashValue << 5) + hashValue) + c;
    }
    return hashValue;
}

unsigned long long HawtLib::HawtCrypto::SDBM(const std::string& str) {
    //hash(i) = hash(i - 1) * 65599 + str[i]
    unsigned long long hashValue = 0;
    int c;
    for (char c : str) 
        hashValue = c + (hashValue << 6) + (hashValue << 16) - hashValue;
    return hashValue;
}
