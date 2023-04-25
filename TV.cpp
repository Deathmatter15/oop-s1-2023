#include <iostream> 
#include "TV.h"

    TV::TV() : Appliance:Appliance() {
        screenSize = 0;
    }
    TV::TV(int input_powerRating, double input_screenSize) {
        powerRating = input_powerRating;
        screenSize = input_screenSize;
    }

    void TV:: setScreenSize(double input_screenSize) {
        screenSize = input_screenSize;
    };

    double TV::getScreenSize() {
        return screenSize;
    }

    double getPowerConsumption() {
        return powerRating*(screenSize/10);
    }
    