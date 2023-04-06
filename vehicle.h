#ifndef VehicleFiveOFour 
#define VehicleFiveOFour
#include <string.h> 
#include <ctime>

class Vehicle {
    
    private:

    std::time_t timeOfEntry;
    int ID; 

    public:
    
    Vehicle(int given_ID){
        ID = given_ID;
        timeOfEntry = std::time(nullptr);
    };

    std::time_t findtimeOfEntry(){
        return timeOfEntry;
    };
    
    
    int findID(){
        return ID;
    };

};

class Car: public Vehicle{
    private:
    
    public:
    Car(int given_ID): Vehicle(given_ID){};

    Car(): Vehicle(0){};

    int getParkingDuration(){
        int timeParked = 0.90 * std::difftime(std::time(nullptr),findtimeOfEntry());
        return timeParked; 
    };
};

class Bus: public Vehicle{
    private:
    
    public:
    Bus(int given_ID): Vehicle(given_ID){}

    Bus(): Vehicle(0){};

    int getParkingDuration(){
        int timeParked = 0.75 * std::difftime(std::time(nullptr),findtimeOfEntry());
        return timeParked; 
    }
};

class Motorbike: public Vehicle{
    private:
    
    public:
    Motorbike(int given_ID): Vehicle(given_ID){};

    Motorbike(): Vehicle(0){};

    int getParkingDuration(){
        int timeParked = 0.85 * std::difftime(std::time(nullptr),findtimeOfEntry());
        return timeParked;  
    }
};
#endif