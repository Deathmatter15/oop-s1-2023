#ifndef ParkingLotSixOFour
#define ParkingLotSixOFour
#include "vehicle.h"
class ParkingLot {

private:

int max_parking_capacity;
int vehicles_count;
Vehicle *vehicles; 

public:

ParkingLot(){
    max_parking_capacity = 0;
    vehicles_count = 0;
}

ParkingLot(int carpark_capacity){
    max_parking_capacity = carpark_capacity;
    vehicles = new Vehicle [carpark_capacity];
}
  
int getcount(){
    return(vehicles_count);
}

void parkVehicle(Vehicle *new_parking_vehicle){
    
    if (getcount() < max_parking_capacity){
        vehicle[vehicles_count] = new_parking_vehicle;
        vehicle_count++;
    }else if(vehicle_count > max_parking_capacity){
        std::cout << "The lot is full" << std::endl;
    }
    return; 
}

    
void unparkVehicle(int target_ID){
    for(int i=0; i<max_parking_capacity; i++){
        if(target_ID == vehicles[i].findID()){
            vehicle[i] = Vehicle::Vehicle(0);
            vehicle_amount--;
            return
        }
    }
    std::cout << "Vehicle is not in the lot" << std::endl;
    return;
}
};
#endif