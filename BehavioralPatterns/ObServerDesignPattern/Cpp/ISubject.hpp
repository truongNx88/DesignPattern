#ifndef ISubject_hpp
#define ISubject_hpp

#include <iostream>
#include <string>
#include "IObserver.hpp"

class IObserver;

class ISubject {
public:
    virtual void registerObserver(IObserver* iobServer) = 0;
    virtual void removeObserver(IObserver* iobServer) = 0;
    virtual void notifyObserver() = 0;
};

#endif