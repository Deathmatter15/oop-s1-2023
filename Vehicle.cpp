#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle(){
    ID = 0;
    timeOfEntry = std::time(nullptr);
}

Vehicle::Vehicle(int given_ID){
    ID = given_ID;
    timeOfEntry = std::time(nullptr);
}

std::time_t Vehicle::findtimeOfEntry(){
    return timeOfEntry;
}
    
    
int Vehicle::findID(){
    return ID;
}

int Vehicle::getParkingDuration(){
int timeParked = std::difftime(std::time(nullptr),findtimeOfEntry());
if (timeParked > 4) {
return 0.9 * timeParked;
} else {
return timeParked;
}    
} 