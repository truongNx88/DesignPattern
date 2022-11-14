#include <iostream>

class Interface {
public: 
    virtual ~Interface() {}
    virtual void write(std::string&) = 0;
    virtual void read(std::string&) = 0;
};

class Core : public Interface {
public:
    ~Core() {
        std::cout << "dtor-Core\n"; 
    }

    /*virtual*/ void write(std::string& b) {
        b += "MESSAGE|";
    }

    virtual void read(std::string&) {}
};

class Decorator : public Interface {
    Interface* inner;
public:
    Decorator(Interface* c) {
        inner = c;
    }

    ~Decorator() {
        delete inner;
    }

    /*virtual*/ void write(std::string &b) {
        inner->write(b);
    }

    /*virtual*/ void read(std::string &b) {
        inner->read(b);
    }
};

class Wrapper : public Decorator {
    std::string forward, backward;
public: 
    Wrapper(Interface* c, std::string str) : Decorator(c) {
        forward = str;
        std::string::reverse_iterator it;
        it = str.rbegin();
        for (; it != str.rend(); ++it) {
            backward += *it;
        }
    }

    ~Wrapper() {
        std::cout << "dtor-" << forward << " ";
    }

    virtual void write (std::string &) {}
    virtual void read (std::string &) {}
};

int main(int argc, char const *argv[]) {
    Interface* object = new Wrapper(new Wrapper(new Wrapper(new Core(), "123"), "abc"), "987");
    std::string buf;
    object->write(buf);

    std::cout << "main: " << buf << std::endl;
    object->read(buf);
    delete object;
    return 0;
}
