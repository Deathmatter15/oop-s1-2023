#ifndef ParkingLotSixOFour
#define ParkingLotSixOFour
#include "Vehicle.h"
class ParkingLot {

private:

int max_parking_capacity;
int vehicles_count;
Vehicle *vehicles; 

public:

ParkingLot();

ParkingLot(int carpark_capacity);

int getcount();

void parkVehicle(Vehicle new_parking_vehicle);
    
void unparkVehicle(int target_ID);

};
#endif