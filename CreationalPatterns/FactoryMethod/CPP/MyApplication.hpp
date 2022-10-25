#ifndef MyApplication_hpp
#define MyApplication_hpp

#include "Application.hpp"

class MyApplication : public Application {
public:
    MyApplication() {
        std::cout << "MyApplication: ctor" << std::endl;
    }
    Document *CreateDocument(char *fn) {
        std::cout << "   MyApplication: CreateDocument()" << std::endl;
        return new MyDocument(fn);
    }
};
#endif