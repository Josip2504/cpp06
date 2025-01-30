#include "Serializer.hpp"

int	main() {
	Data	d;
	d.id = 1;
	d.name = "test";

	uintptr_t	p = Serilazer::serialize(&d);
	Data*		ptr = Serilazer::deserialize(p);

	if (&d == ptr) {
		std::cout << "Successful Serilazer" << std::endl;
		std::cout << "Data id: " << d.id << std::endl;
		std::cout << "Ptr id: " << ptr->id << std::endl;
		std::cout << "Data name: " << d.name << std::endl;
		std::cout << "Ptr name: " << ptr->name << std::endl;
	} else {
		std::cout << "Serilazer failed" << std::endl;
	}

	return 0;
}
