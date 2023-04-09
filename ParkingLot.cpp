#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

ParkingLot::ParkingLot(){
    max_parking_capacity = 0;
    vehicles_count = 0;
    vehicles = new Vehicle[0];
}

ParkingLot::ParkingLot(int carpark_capacity){
    max_parking_capacity = carpark_capacity;
    vehicles_count = 0;
    vehicles = new Vehicle[carpark_capacity];
}
  
int ParkingLot::getCount(){
    return(vehicles_count);
}

void ParkingLot::parkVehicle(Vehicle* new_parking_vehicle){
    
    if (getCount() < max_parking_capacity){
        vehicles[vehicles_count] = *new_parking_vehicle;
        vehicles_count++;
    }else if(getCount() >= max_parking_capacity){
        std::cout << "The lot is full" << std::endl;
    }
    return; 
}

    
void ParkingLot::unparkVehicle(int target_ID){
    for(int i=0; i<max_parking_capacity; i++){
        if(target_ID == vehicles[i].findID()){
            vehicles[i] = Vehicle();  
            vehicles_count--;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) {
int overstay_counter = 0; //Variable to store the number of overstaying cars 
for (int i=0; i<getCount(); i++){
    if (vehicles[i].findtimeOfEntry() - std::time(nullptr) >= maxParkingDuration){
        overstay_counter++;
    }
}
return overstay_counter;
}
