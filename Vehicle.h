#ifndef VehicleFiveOFour 
#define VehicleFiveOFour
#include <string.h> 
#include <ctime>

class Vehicle {
    
    private:

    std::time_t timeOfEntry;
    int ID; 

    public:
    Vehicle();

    Vehicle(int given_ID);

    std::time_t findtimeOfEntry();
    
    
    int findID();
    
    int getParkingDuration();
};
#endif