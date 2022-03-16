//
// Created by lmont on 15/3/2022.
//

#include "Derived1.h"
#include "Derived2.h"

int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1 = Derived1(0, 1);
    derived1.doSomething();

    Derived2 derived2 = Derived2(0, 2);
    derived2.doSomething();

}