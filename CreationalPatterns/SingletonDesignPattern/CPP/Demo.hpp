#pragma once
#include "GlobalClass.hpp"
#include <iostream>
#include <cstdlib>

class Demo {
private:
    
public:
    Demo(){}
    ~Demo();
    void setRandValue() {
        int randNumber = rand() % (50 - 3 + 1) + 3;
        std::cout << "Random value: " << randNumber << std::endl;
        GlobalClass::instance()->set_value(randNumber);
    }

    void printValue() {
        std::cout << "Current value: " << GlobalClass::instance()->get_value() << std::endl;
    }

};
