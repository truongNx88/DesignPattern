#ifndef Builder_hpp
#define Builder_hpp

#include "DistrWorkPackage.hpp"

class Builder {
protected:
    DistrWorkPackage* _result;
public:
    virtual void configureFile(char*) = 0;
    virtual void configureQueue(char*) = 0;
    virtual void configurePathway(char*) = 0;

    DistrWorkPackage* getResult() {
        return _result;
    }
};
#endif