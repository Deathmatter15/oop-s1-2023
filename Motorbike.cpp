#include <iostream>
#include <ctime>
#include "Motorbike.h"

Motorbike::Motorbike(int given_ID): Vehicle(given_ID){};

Motorbike::Motorbike(): Vehicle(0){};

int Motorbike::getParkingDuration(){
    int timeParked = 0.85 * std::difftime(std::time(nullptr),findtimeOfEntry());
    return timeParked;  
}