#include "appliance.h"
#include <iostream> 

Appliance::Appliance() {
    powerRating = 0;
    isOn = false; 
    return; 
}

Appliance::Appliance(int powerRating) {
    powerRating = powerRating;
    isOn = false;
    return;
}
void Appliance::set_powerRating(int powerRating) {
    powerRating = powerRating;
    return;
}
int Appliance::get_powerRating() {
    return powerRating;
}

bool Appliance::get_isOn() {
    return isOn;
}

void Appliance::turnOn() {
    isOn = true; 
}

void Appliance::turnOff() {
    isOn = false;
}

double Appliance::getPowerConsumption(){
    return 0;
}

Appliance::~Appliance(){
    
}