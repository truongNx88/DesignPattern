#pragma once 

#include "Image.hpp"

class SpotImage : public Image {
private:
    SpotImage() {
        addPrototype(this);
    }

    static SpotImage _spotImage;
    int _id;
    static int _count;

protected:
    SpotImage(int dummy){
        _id = _count++;
    }

public:
    imageType returnType() {
        return SPOT;
    }

    void draw() {
        std::cout << "SpotImage: draw " << _id << std::endl;
    }

    Image* clone() {
        return new SpotImage(1);
    }
};

SpotImage SpotImage::_spotImage;
int SpotImage::_count = 1;
