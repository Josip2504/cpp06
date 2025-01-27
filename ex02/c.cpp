#include "Base.hpp"

Base::~Base() {}

A::A() {}
A::A(const A &) {}
A &A::operator=(const A &) { return *this; }
A::~A() {}

B::B() {}
B::B(const B &) {}
B &B::operator=(const B &) { return *this; }
B::~B() {}

C::C() {}
C::C(const C &) {}
C &C::operator=(const C &) { return *this; }
C::~C() {}
