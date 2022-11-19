#include <iostream>
#include <vector>

class Number {
public:
    void dubble (int &value) {
        value *=2;
    }
};

class Command {
public:
    virtual void execute(int &) = 0;
};

class SimpleCommand : public Command {
    typedef void (Number::*Action) (int &);
    Number* receiver;
    Action action;

public:
    SimpleCommand (Number* rec, Action act) {
        receiver = rec;
        action = act;
    }

    void execute(int& num) {
        (receiver->*action) (num);
    }
};

class MacroCommand: public Command {
    std::vector<Command*> list;
public:
    void add (Command* cmd) {
        list.push_back(cmd);
    }

    void execute(int &num) {
        for (size_t i = 0; i < list.size(); i++) {
            list[i]->execute(num);
        }
    }
};

int main(int argc, char const *argv[]) {
    Number object;
    Command* command[3];
    command[0] = new SimpleCommand(&object, &Number::dubble);

    MacroCommand two;
    two.add(command[0]);
    two.add(command[0]);
    command[1] = &two;

    MacroCommand four;
    four.add(&two);
    four.add(&two);
    command[2] = &four;

    int num, index;
    while (true) {
        std::cout << "Enter number selection (0=2x 1=4x, 2=16x): ";
        std::cin >> num >> index;
        command[index]->execute(num);
        std::cout << " " << num << std::endl;
    }
    
    return 0;
}

