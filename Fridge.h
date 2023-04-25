#ifndef FridgeTwentyFour
#define FridgeTwentyFour
#include "Appliance.h"
    class Fridge: public Appliance {
        private:
        int powerRating;
        double volume;
        bool isOn;

        public:
        Fridge();
        Fridge(int powerRating, double volume);

        void setVolume(double input_volume);
        double getVolume();

        double getPowerConsumption() override;
    };
#endif
