#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main() {
	srand(time(0));

	Base* b = generate();
	identify(b);
	identify(*b);
	delete b;
	
	return 0;
}