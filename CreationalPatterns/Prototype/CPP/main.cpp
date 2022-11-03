#include "SpotImage.hpp"
#include "LandSatImage.hpp"

//Simulated stream of creation requests
const int NUM_IMAGE = 8;
imageType input[NUM_IMAGE] = {
    LSAT, LSAT, SPOT, LSAT, SPOT, SPOT, LSAT
};

int main(int argc, char const *argv[]) {
    Image* image[NUM_IMAGE];
    //give an image type, find right prototype, and return a clone
    for (size_t i = 0; i < NUM_IMAGE; i++) {
        image[i] = Image::findAndClone(input[i]);
    }
    //Demonstrate that correct image objects have been cloned
    for (size_t i = 0; i < NUM_IMAGE; i++) {
        image[i]->draw();
    }

    //Free the dymatic memory
    for (size_t i = 0; i < NUM_IMAGE; i++) {
        delete image[i];
    }
    
    
    return 0;
}


