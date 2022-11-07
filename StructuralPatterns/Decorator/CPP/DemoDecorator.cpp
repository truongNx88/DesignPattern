#include <iostream>

// 1. lowest common denominator
class Widget {
public: 
    virtual void draw() = 0;
};

class TextFiled : public Widget {
    // 3. "Core" class & "is a"
private:
    int width, height;
public:
    TextFiled(int w, int h) {
        width = w;
        height = h;
    }
    /*virtual*/
    void draw() {
        std::cout << "TextField: " << width << ", " << height << '\n';  
    }
};

// 2. 2nd level base class

class Decorator : public Widget { // 4. "is a" relationship
private:
    Widget* wid;
public:
    Decorator(Widget* w){
        wid = w;
    }

    void draw() {
        wid->draw(); // 5. Delegation
    }
};

class BorderDecorator: public Decorator {
public: 
    BorderDecorator(Widget* w) : Decorator(w) {}
    // virtual
    void draw() {
        //7. Delegate to base class and add extra stuff
        Decorator::draw();
        std::cout << "   BoderDecorator" << '\n';
    }
};

class ScrollDecorator: public Decorator {
public:
    ScrollDecorator(Widget* w) : Decorator(w) {}

    //virtual

    void draw() {
        // 7. Delegate to base class and add extra stuff
        Decorator::draw();
        std::cout << "   ScrollDecorator" << '\n';
    }

};

int main(int argc, char const *argv[]) {
    // 8. Client has the responsibility to compose desired configurations
    Widget* aWidget = new BorderDecorator(new BorderDecorator(new ScrollDecorator(new TextFiled(80, 24))));

    aWidget->draw();
    return 0;
}


