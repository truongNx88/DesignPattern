#ifndef UnixBuilder_hpp
#define UnixBuilder_hpp

#include "Builder.hpp"

class UnixBuilder : public Builder {
public:
    UnixBuilder() {
        _result = new DistrWorkPackage("Unix");
    }
    
    void configureFile(char* name) {
        _result->setFile("flatFile", name);
    }

    void configureQueue(char* queue) {
        _result->setQueue("FIFO", queue);
    }

    void configurePathway(char* type) {
        _result->setPathway("thread", type);
    }
};

class VmsBuilder : public Builder {
public:
    VmsBuilder() {
        _result = new DistrWorkPackage("Vms");
    }

    void configureFile(char* name) {
        _result->setFile("ISAM", name);
    }

    void configureQueue(char* queue) {
        _result->setQueue("priority", queue);
    }

    void configurePathway(char* type) {
        _result->setPathway("LWP", type);
    }
};



#endif