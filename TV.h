#ifndef TVTwentyFour
#define TVTwentyFour
#include "Appliance.h"
    class TV : public Appliance {

    private:
    int  powerRating;
    bool isOn;
    double screenSize;

    public:
    TV();
    TV(int powerRating, double screenSize);

    double screenSize; // screen size in inches

    void setScreenSize(double screenSize);
    double getScreenSize();

    double getPowerConsumption();
    }
#endif