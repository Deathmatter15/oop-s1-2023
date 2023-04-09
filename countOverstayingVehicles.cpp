#include <iostream>
#include "ParkingLot.h"
using namespace std;

int countOverstayingVehicles(int maxParkingDuration) {
int overstay_counter = 0 //Variable to store the number of overstaying cars 
for (int i=0; i<getcount(); i++){
    if (vehicles[i].getParkingDuration() >= maxParkingDuration){
        overstay_counter++;
    }
}
return overstay_counter;
}

