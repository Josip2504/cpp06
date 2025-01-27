#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>

struct Data {
    int id;
    std::string name;
};

class Serializer {
public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
private:
    Serializer(); // private constructor to prevent instantiation
    Serializer(const Serializer &); // private copy constructor to prevent copying
    Serializer &operator=(const Serializer &); // private assignment operator to prevent assignment
};

#endif // SERIALIZER_HPP
