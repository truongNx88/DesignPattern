#include "Demo.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
    Demo* test = new Demo();
    test->setRandValue();
    test->printValue();


    std::cout << "\nTest " << std::endl;

    GlobalClass::instance()->set_value(88);
    std::cout << "Test result: " << GlobalClass::instance()->get_value() << std::endl;
    return 0;
}
