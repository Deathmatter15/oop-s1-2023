#include <iostream>
#include <ctime>
#include "Car.h"

Car::Car(int given_ID): Vehicle(given_ID){};

Car::Car(): Vehicle(0){};

int Car::getParkingDuration(){
    return 0.90 * Vehicle::getParkingDuration(); 
};
