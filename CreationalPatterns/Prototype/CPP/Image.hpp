#pragma once

#include <iostream>

enum imageType {
    LSAT, SPOT
};

class Image {
private:
    static Image* _prototype[10];
    static int _nextSlot;
public:
    virtual void draw() = 0;
    static Image* findAndClone(imageType);
protected: 
    virtual imageType returnType() =0;
    virtual Image* clone() = 0;
    // As each  subclass of Image is declared, it registers its phototype
    static void addPrototype(Image* image) {
        _prototype[_nextSlot++] = image;
    }
};

Image* Image::_prototype[];
int Image::_nextSlot;

Image* Image::findAndClone(imageType type) {
    for (size_t i = 0; i < _nextSlot; i++) {
        if (_prototype[i]->returnType() == type) {
            return _prototype[i]->clone();
        }
            
    }
    return NULL;
}