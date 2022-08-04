#include "GlobalClass.hpp"
#include <iostream>

void foo(void) {
    GlobalClass::instance()->set_value(1);

    std::cout <<  "foo: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
}

void bar(void) {
    GlobalClass::instance()->set_value(2);
    std::cout << "bar: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
}

int main(int argc, char const *argv[]) {
    std::cout << "main: global_ptr is " << GlobalClass::instance()->get_value() << '\n';
    foo();
    bar();
    return 0;
}
