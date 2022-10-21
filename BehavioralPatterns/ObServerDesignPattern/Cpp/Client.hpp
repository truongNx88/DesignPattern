#ifndef Client_hpp
#define Client_hpp

#include "IObserver.hpp"

class Client : public IObserver {
public:
    Client() {}
    void update(std::string operation, std::string record) {
        std::cout << "Client: " << operation << " operation was performed on " << record << std::endl;
    }
};


class Developer : public IObserver {
public:
    Developer() {}
    void update(std::string operation, std::string record) {
        std::cout << "Developer: " << operation << " operation was performed on " << record << std::endl;
    }
};

class Boss : public IObserver {
public:
    Boss() {}
    void update(std::string operation, std::string record) {
        std::cout << "Boss: " << operation << " operation was performed on " << record << std::endl;
    }
};



#endif