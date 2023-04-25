#include <iostream>
#include "House.h"

House::House(){
    numAppliances = 0;
    appliances = new Appliance*[0];
}

House::House(int input_numAppliances) {
    numAppliances = 0;
    numAppliances_max = input_numAppliances;
    appliances = new Appliance*[input_numAppliances];
}

bool House::addAppliance(Appliance* appliance) {
    if(numAppliances < numAppliances_max){
        appliances[numAppliances] = appliance;
        numAppliances++;
        return true;
    } else if (numAppliances >= numAppliances_max){
        return false;
    } else {
        return false;
    }
}

double House::getTotalPowerConsumption(){
    double TotalPowerConsumpton = 0;
    for(int i = 0; i>numAppliances; i++) {
        TotalPowerConsumpton += appliances[i]->getPowerConsumption();
    }
    return TotalPowerConsumpton;
}