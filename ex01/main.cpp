#include <iostream>
#include "Serializer.hpp"

int main() {
    Data myData;
    myData.id = 42;
    myData.name = "Example Data";

    // Serialize the Data object
    uintptr_t raw = Serializer::serialize(&myData);

    // Deserialize the uintptr_t back to a Data pointer
    Data* ptr = Serializer::deserialize(raw);

    // Verify that the deserialized pointer points to the original Data object
    if (ptr == &myData) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Data ID: " << ptr->id << std::endl;
        std::cout << "Data Name: " << ptr->name << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
