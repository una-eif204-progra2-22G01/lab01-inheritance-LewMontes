//
// Created by lmont on 15/3/2022.
//

#include "Derived2.h"

Derived2::Derived2(int baseNum, int derivedNum2) : Base(baseNum), derivedNum2(derivedNum2) {}

int Derived2::getDerivedNum2() const {
    return derivedNum2;
}

void Derived2::setDerivedNum2(int derivedNum2) {
    Derived2::derivedNum2 = derivedNum2;
}

Derived2::~Derived2() {

}

string Derived2::toString() {
    stringstream s;

    s << "Derived Class Type 2 - Num. " << getDerivedNum2() << endl;

    return s.str();
}

void Derived2::doSomething() {
    cout << "Derived2!!!" << endl;
}
