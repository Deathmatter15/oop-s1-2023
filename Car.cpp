#include <iostream>
#include <ctime>
#include "Car.h"

Car::Car(int given_ID): Vehicle(given_ID){};

Car::Car(): Vehicle(0){};

int Car::getParkingDuration(){
    int timeParked = 0.90 * std::difftime(std::time(nullptr),findtimeOfEntry());
    return timeParked; 
};
