#ifndef BASE_HPP
#define BASE_HPP

class Base {
public:
    virtual ~Base();
};

class A : public Base {
public:
    A();
    A(const A &);
    A &operator=(const A &);
    ~A();
};

class B : public Base {
public:
    B();
    B(const B &);
    B &operator=(const B &);
    ~B();
};

class C : public Base {
public:
    C();
    C(const C &);
    C &operator=(const C &);
    ~C();
};

#endif // BASE_HPP
