#include <iostream>  // allows program to output data to the screen

struct Base {
    virtual void do_something() {}
};

struct Derived1 : Base {
    virtual void do_semothing() {
        std::cout << "Derived1!!!" << std::endl;
    }
};

struct Derived2 : Base {
    virtual void do_semothing() {
        std::cout << "Derived2!!!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_semothing();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main