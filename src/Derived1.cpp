//
// Created by lmont on 15/3/2022.
//

#include "Derived1.h"

Derived1::Derived1(int baseNum, int derivedNum1) : Base(baseNum), DerivedNum1(derivedNum1) {}

int Derived1::getDerivedNum1() const {
    return DerivedNum1;
}

void Derived1::setDerivedNum1(int derivedNum1) {
    DerivedNum1 = derivedNum1;
}

string Derived1::toString() {
    stringstream s;

    s << "Derived Class Type 1 - Num. " << getDerivedNum1() << endl;

    return s.str();
}

Derived1::~Derived1() {

}

void Derived1::doSomething() {
    cout << "Derived1!!!" << endl;
}
