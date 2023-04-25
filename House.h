#ifndef HouseTwentyFive
#define HouseTwentyFive
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
    class House {
        private:
        Appliance **appliances;
        int numAppliances;
        int numAppliances_max;

        public:
        House();
        House(int input_numAppliances);
        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption();

    };
#endif 