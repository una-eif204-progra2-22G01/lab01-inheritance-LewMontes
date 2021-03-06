//
// Created by lmont on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

#include <iostream>
#include <sstream>
using namespace std;

class Base {
private:
    int baseNum;

public:
    Base();

    Base(int baseNum);

    int getBaseNum() const;

    void setBaseNum(int baseNum);

    virtual ~Base();

    virtual string toString();

    virtual void doSomething();

};


#endif //LAB01_INHERITANCE_BASE_H
