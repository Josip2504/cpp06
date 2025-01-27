#include "Functions.hpp"

Base* generate() {
    srand(static_cast<unsigned int>(time(0)));
    int randNum = rand() % 3;

    if (randNum == 0) return new A();
    else if (randNum == 1) return new B();
    else return new C();
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p)) std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p)) std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {
        try {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (std::bad_cast&) {
            try {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (std::bad_cast&) {
                std::cout << "Unknown type" << std::endl;
            }
        }
    }
}
