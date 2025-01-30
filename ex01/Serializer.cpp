#include "Serializer.hpp"

Serilazer::Serilazer() {};

Serilazer::Serilazer(Serilazer const& other) {
	*this = other;
}

Serilazer& Serilazer::operator=(const Serilazer& other) {
	if (this != &other) {}
	return (*this);
}

Serilazer::~Serilazer() {};

uintptr_t Serilazer::serialize(Data* ptr) {
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* Serilazer::deserialize(uintptr_t raw) {
	Data* res = reinterpret_cast<Data*>(raw);
	return res;
}
