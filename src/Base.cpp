//
// Created by lmont on 15/3/2022.
//

#include "Base.h"

Base::Base(int baseNum) : baseNum(baseNum) {}

int Base::getBaseNum() const {
    return baseNum;
}

void Base::setBaseNum(int baseNum) {
    Base::baseNum = baseNum;
}

Base::~Base() {

}

string Base::toString() {
    stringstream s;

    s << "Base - Num. " << getBaseNum() << endl;

    return s.str();
}