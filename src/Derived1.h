//
// Created by lmont on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H

#include "Base.h"

class Derived1 : Base {
private:
    int derivedNum1;

public:
    Derived1();

    Derived1(int baseNum, int derivedNum1);

    int getDerivedNum1() const;

    void setDerivedNum1(int derivedNum1);

    string toString() override;

    ~Derived1() override;

    void doSomething() override;
};


#endif //LAB01_INHERITANCE_DERIVED1_H
