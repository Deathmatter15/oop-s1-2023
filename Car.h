#ifndef CarNineOFour
#define CarNineOFour
#include "Vehicle.h"

class Car: public Vehicle{
    private:
    
    public:
    Car(int given_ID);

    Car();

    int getParkingDuration();
};

#endif