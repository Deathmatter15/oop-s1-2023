#include <iostream>
#include "Vehicle.h"
#include "ParkingLot.h"
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
if(countOverstayingVehicles(15)>1){
return timeParked-1;
}else{
return timeParked;    
} 
}