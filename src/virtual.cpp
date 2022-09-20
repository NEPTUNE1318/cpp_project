#include <iostream>

class Base {
public:
    Base() { std::cout <<"base class" << std::endl; }

    virtual void what() const { std::cout <<"what() in the base class" << std::endl; }
};

class Derived : public Base {
public:
    Derived() : Base() { std::cout << "derived class" << std::endl; }

    void what() const override { std::cout << "what() in the derived class" << std::endl; }
};

int main() {
    Base p;
    Derived c;

    Base* p_c = &c;
    Base* p_p = &p;

    std::cout << " == The actual object is the Base == " << std::endl;
    p_p->what();

    std::cout << " == The acutal object is the Base == "  << std::endl;
    p_c->what();
}