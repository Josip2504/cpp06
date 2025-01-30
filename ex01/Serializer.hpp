#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>
#include <string>

struct Data {
	int			id;
	std::string	name;
};

class Serilazer {
	private:
		Serilazer();
		Serilazer(Serilazer const& other);
		Serilazer& operator=(const Serilazer& other);
		~Serilazer();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif