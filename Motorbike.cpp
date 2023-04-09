#include <iostream>
#include <ctime>
#include "Motorbike.h"

Motorbike::Motorbike(int given_ID): Vehicle(given_ID){};

Motorbike::Motorbike(): Vehicle(0){};

int Motorbike::getParkingDuration(){
    return 0.90 * Vehicle::getParkingDuration(); 
}