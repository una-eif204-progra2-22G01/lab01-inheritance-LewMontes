//
// Created by lmont on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H

#include "Base.h"

struct Derived1 : Base {
private:
    int DerivedNum1;

public:
    Derived1(int baseNum, int derivedNum1);

    int getDerivedNum1() const;

    void setDerivedNum1(int derivedNum1);

    string toString() override;

    virtual ~Derived1();

    virtual void doSomething();
};


#endif //LAB01_INHERITANCE_DERIVED1_H
