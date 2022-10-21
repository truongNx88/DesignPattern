#ifndef IObserver_hpp
#define IObserver_hpp

#include "ISubject.hpp"

class IObserver {
public:
   virtual void update(std::string operation, std::string record) = 0;
};

#endif