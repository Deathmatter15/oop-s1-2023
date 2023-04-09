#include <iostream>
#include "ParkingLot.h"

ParkingLot::ParkingLot(){
    max_parking_capacity = 0;
    vehicles_count = 0;
}

ParkingLot::ParkingLot(int carpark_capacity){
    max_parking_capacity = carpark_capacity;
    vehicles = new Vehicle[carpark_capacity];
}
  
int ParkingLot::getcount(){
    return(vehicles_count);
}

void ParkingLot::parkVehicle(Vehicle new_parking_vehicle){
    
    if (getcount() < max_parking_capacity){
        vehicles[vehicles_count] = new_parking_vehicle;
        vehicles_count++;
    }else if(vehicles_count > max_parking_capacity){
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
    std::cout << "Vehicle is not in the lot" << std::endl;
    return;
}