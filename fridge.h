#ifndef FridgeTwentyFour
#define FridgeTwentyFour
#include "appliance.h"
    class Fridge: public Appliance {
        private:
        int powerRating;
        double volume;
        bool isOn;

        public:
        Fridge();
        Fridge(int powerRating, double volume);

        double volume; // volume in litres

        void set_Volume(double input_volume);
        double get_Volume();

        double getPowerConsumption();
    };
#endif