#include <iostream>

class Person {
    std::string nameString;
    static std::string list[];
    static int next;
public: 
    Person() {
        nameString = list[next++];
    }

    std::string name() {
        return nameString;
    }
};

std::string Person::list[] = 
{ "Tom", "Dick", "Harry", "Bubba" };

int Person::next = 0;

class PettyCashProtected {
    int balance;
public: 
    PettyCashProtected() {
        balance = 500;
    }

    bool withDraw(int amount) {
        if (amount > balance) {
            return false;
        }

        balance = balance - amount;
        return true;
    }

    int getBalance() {
        return balance;
    }
};

class PettyCash {
    PettyCashProtected realThing;
public:
    bool withdraw(Person&p , int amount) {
        if (p.name() == "Tom" || p.name() == "Harry" || p.name() == "Bubba") {
            return realThing.withDraw(amount);
        }
        else {
            false;
        }
    }

    int getBalace() {
        return realThing.getBalance();
    }
};

int main(int argc, char const *argv[]) {
    PettyCash pc;
    Person workers[4];

    for (size_t i = 0, amount = 100; i < 4; i++, amount += 100) {
        if (!pc.withdraw(workers[i], amount)) {
            std::cout << " No money for " << workers[i].name() << std::endl;
        }
        else {
            std::cout << amount << " dollar for " << workers[i].name() << std::endl;
        }  

        std::cout << "Remaining balance is " << pc.getBalace() << std::endl;  
    }
    
    return 0;
}
