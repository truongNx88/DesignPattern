// "->" and "." operators give different results

#include <iostream>

class Subject {
public:
    virtual void execute() = 0;
};

class RealSubject : public Subject {
    std::string str;
public:
    RealSubject(std::string s) {
        str = s;
    }

    void execute() {
        std::cout << str << std::endl;
    }
};

class ProxySubject : public Subject {
    std::string first, second, third;
    RealSubject* ptr;
public:
    ProxySubject (std::string s) {
        int num = s.find_first_of(' ');
        first = s.substr(0, num);
        s = s.substr(num + 1);

        num = s.find_first_of(' ');
        second = s.substr(0, num);
        s = s.substr(num + 1);

        num = s.find_first_of(' ');
        third = s.substr(0, num);
        s = s.substr(num + 1);
        ptr = new RealSubject(s);
    }

    ~ProxySubject() {
        delete ptr;
    }

    RealSubject* operator ->() {
        std::cout << first << ' ' << second << ' ';
        return ptr;
    }

    void execute() {
        std::cout << first << ' ' << third << ' ';
        ptr->execute();
    }
};

int main(int argc, char const *argv[]) {
    ProxySubject obj (std::string("the quick brown fox jumped over the dog"));
    obj->execute();
    obj.execute();
    return 0;
}
