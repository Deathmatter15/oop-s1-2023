#include <iostream>
#include <ctime>
#include "Bus.h"

Bus::Bus(int given_ID): Vehicle(given_ID){};

Bus::Bus(): Vehicle(0){};

int Bus::getParkingDuration(){
    return 0.75 * Vehicle::getParkingDuration();
};
