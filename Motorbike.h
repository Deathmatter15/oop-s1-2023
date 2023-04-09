#ifndef MotorbikeNineOFour
#define MotorbikeNineOFour
#include "Vehicle.h"

class Motorbike: public Vehicle{
    private:
    
    public:
    Motorbike(int given_ID);

    Motorbike();

    int getParkingDuration();
};
#endif