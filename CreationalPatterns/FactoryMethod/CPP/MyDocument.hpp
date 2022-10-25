#ifndef MyDocument_hpp
#define MyDocument_hpp

#include "Document.hpp"

class MyDocument : public Document {
private:
    /* data */
public:
    MyDocument(char* fn) : Document(fn) {}

    void Open() {
        std::cout << "  MyDocument: Open()"  << std::endl;
    }

    void Close() {
        std::cout << "  MyDocument: Close()"  << std::endl;
    }
};
#endif