#include <iostream> 
#include "Tesla.h"

Tesla::Tesla(): Car::Car() {
    batteryPercentage = 100;
}             
Tesla::Tesla(char input_model, int input_price) {
    price = input_price;
    emissions = 0;

    model = input_model;
    batteryPercentage = 100;
}
  
void Tesla::set_model(char input_model){
    model = input_model;
}
char Tesla::get_model() {
    return model;
}  

void Tesla::set_batteryPercentage(float input_percentage){
    if((input_percentage <= 100) && (input_percentage >=0)){
        batteryPercentage = input_percentage;
    }
    else if (input_percentage < 0) {
        batteryPercentage = 0;
    }
    else if (input_percentage > 100) {
        batteryPercentage = 100;
    }
}
float Tesla::get_batteryPercentage(){
    return batteryPercentage;
};
  
void Tesla::chargeBattery(int mins) {
    batteryPercentage += 0.5*mins;
    if (batteryPercentage > 100) {
        batteryPercentage = 100;
    }
}            

void Tesla::drive(int kms){
    float kms_driven = kms;
    if (batteryPercentage > kms/5){
        emissions = 74*kms_driven;
        batteryPercentage -= kms_driven/5;
    } else if (batteryPercentage <= kms/5) {
        kms_driven = batteryPercentage*5;
        emissions = 74*kms_driven;
        batteryPercentage = 0;
    }
}
Tesla::~Tesla(){

};