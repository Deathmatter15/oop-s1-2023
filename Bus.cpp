#include <iostream>
#include <ctime>
#include "Bus.h"

Bus::Bus(int given_ID): Vehicle(given_ID){};

Bus::Bus(): Vehicle(0){};

int Bus::getParkingDuration(){
    int timeParked = 0.75 * std::difftime(std::time(nullptr),findtimeOfEntry());
    return timeParked; 
};