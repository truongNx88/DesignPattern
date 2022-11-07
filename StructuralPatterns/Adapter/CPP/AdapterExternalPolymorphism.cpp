#include <iostream>


class ExecuteInterface {
    //1. Specify the new interface
public:
    virtual ~ExecuteInterface() {}
    virtual void excute() = 0;
};

// 2. Design a "wrapper" or "adapter" class 
template <class TYPE>
class ExecuteAdapter : public ExecuteInterface {
private:
    TYPE* object; // ptr-to-object attribute
    void(TYPE::* method)(); /*  the old */ // ptr-to-member-function attribute
public:
    ExecuteAdapter(TYPE* o, void (TYPE::* m)()) {
        object = o;
        method = m;
    }

    ~ExecuteAdapter() {
        delete object;
    }

    //4. The adapter/wrapper "maps" the new to the legacy implementation
    void excute() {
        //the new
        (object->*method)();
    }
};


// The old: thre totally incompatible class
// no common base class,

class Fea {
    // no hope of polymorphism
public:
    ~Fea() {
        std::cout << "Fea::dtor" << std::endl;
    }

    void doThis() {
        std::cout << "Fea::doThis" << std::endl;
    }
};

class Feye {
public:
    ~Feye() {
        std::cout << "Feye::dctor" << std::endl;
    }

    void doThat() {
        std::cout << "Feye::doThat" << std::endl;
    }
};

class Pheuau {
public:
    ~Pheuau() {
        std::cout << "Pheuau::dctor" << std::endl;
    }

    void doSomeThing() {
        std::cout << "Pheuau::doSomeThing" << std::endl;
    }
};

// the new is returned
ExecuteInterface** initialize() {
    ExecuteInterface** array = new ExecuteInterface* [3];
    //The old is below
    array[0] = new ExecuteAdapter<Fea>(new Fea(), &Fea::doThis);
    array[1] = new ExecuteAdapter<Feye> (new Feye(), &Feye::doThat);
    array[2] = new ExecuteAdapter<Pheuau> (new Pheuau, &Pheuau::doSomeThing);

    return array;
}

int main(int argc, char const *argv[]) {
    ExecuteInterface** objects = initialize();

    for (size_t i = 0; i < 3; i++) {
        objects[i]->excute();
    }

    //3. Client uses the new (polymorphism)

    for (size_t i = 0; i < 3; i++) {
        delete objects[i];
    }

    delete objects;
    
    
    return 0;
}
