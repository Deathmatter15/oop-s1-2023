#include <iostream> 
#include "Fridge.h"

Fridge::Fridge(): Appliance::Appliance() {
    volume = 0;
}

Fridge::Fridge(int input_powerRating, double input_vol) {
    powerRating = input_powerRating;
    volume = input_vol;
} 

void Fridge::set_Volume(double input_vol) {
    volume = input_vol;
}

double Fridge::get_Volume() {
    return volume; 
}

double Fridge::getPowerConsumption(){
return powerRating*24 *(volume/100);
}