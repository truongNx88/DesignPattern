#include <iostream>
#include <string>

class Person;

class Command {
    /**
     * @brief Create a class that encapsulates and object and a member function
     * a point to a member function (the attribute's name is "method")
     */

    Person* object;
    void (Person::* method)();
public:
    Command(Person* obj = 0, void(Person::* meth)() = 0 ) {
        object = obj; // the argument's name is "meth"
        method = meth;
    }

    void execute() {
        (object->*method)(); //invoke the method on the object 
    }
};

class Person {
    std::string name;

    // cmd is a "black box", it is a method invocation
    // promoted to "full object status"

    Command cmd;
public: 
    Person(std::string n, Command c) : cmd(c) {
        name = n;
    }

    void talk() {
        // "this" is sender, cmd has the receiver
        std::cout << name << " is talking" << std::endl;
        cmd.execute();
    }

    void passOn() {
        std::cout << name << " is passing on" << std::endl;
        //4. When the sender is ready to callback to the receiver,
        // it calls excute()
        cmd.execute();
    }

    void gosip() {
        std::cout << name << " is gossiping" << std::endl;
        cmd.execute();
    }

    void listening() {
        std::cout << name << " is listening" << std::endl;
    }
};

int main(int argc, char const *argv[]) {
    // Fred will "execute" Barney which will result in a call to passOn()
    // Barney will "execute" Betty which will result in a call to gossip()
    // Betty will "execute" Wilma which will result in a call to listen()

    Person wilma("Wilma", Command());
    // 2. Instantiate an object for each "callback"
    // 3. Pass each object to its future "sender"
    Person betty("Betty", Command(&wilma, &Person::listening));
    Person barney("Barney", Command(&betty, &Person::gosip));
    Person fred("Fred", Command(&barney, &Person::passOn));

    return 0;
}
