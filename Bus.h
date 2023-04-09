#ifndef BusNineOFour
#define BusNineOFour
#include "Vehicle.h"

class Bus: public Vehicle{
    private:
    
    public:
    Bus(int given_ID);

    Bus();

    int getParkingDuration();
};

#endif