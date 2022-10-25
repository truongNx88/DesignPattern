#ifndef Document_hpp
#define Document_hpp

#include <cstring>
#include <iostream>

class Document {
private:
    char name[20];
public:
    Document(char* fn) {
        strcpy(name, fn);
    }
    
    virtual void Open() = 0;
    virtual void Close() = 0;

    char* GetName() {
        return name;
    }
};

#endif
