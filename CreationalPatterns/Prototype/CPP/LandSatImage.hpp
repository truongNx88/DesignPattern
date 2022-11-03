#pragma once 

#include "Image.hpp"

class LandSatImage : public Image {
private:
    // Mechanism for initializing an Image subclass- this causes the 
    // default ctor to be called, which registers the subclass's prototype

    // Nominal "state" per instance mechanism
    static int _count;
    int _id;

    // This is only called when the private static member is initiated
    LandSatImage() {
        addPrototype(this);
    }

    static LandSatImage _landSatImage;
    
public:
    imageType returnType() {
        return LSAT;
    }

    void draw() {
        std::cout << "LandSatImage draw " << _id << std::endl;
    }

    // When clone() is call, call the one-argument ctor with a dummy arg
    Image* clone() {
        return new LandSatImage(1);
    }
protected:
    //This is only called from clone()
    LandSatImage(int dummy) {
        _id = _count++;
    }
};

// Register the subclass's prototype
LandSatImage LandSatImage::_landSatImage;
int LandSatImage::_count = 1;
