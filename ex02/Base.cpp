#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base*	generate(void) {
	int	r = rand() % 3;
	if (r == 0)
		return new A();
	else if (r == 1)
		return new B();
	else if (r == 2)
		return new C();
	else
		return nullptr;
}

void	identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (...) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (...) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (...) {}
}
