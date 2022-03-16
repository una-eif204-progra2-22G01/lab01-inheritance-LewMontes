//
// Created by lmont on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H

#include "Base.h"

class Derived2 : Base {
private:
    int derivedNum2;

public:
    Derived2(int baseNum, int derivedNum2);

    int getDerivedNum2() const;

    void setDerivedNum2(int derivedNum2);

    virtual ~Derived2();

    string toString() override;

    virtual void doSomething();
};


#endif //LAB01_INHERITANCE_DERIVED2_H
