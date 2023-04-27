#include <iostream> 
#include "Car.h"

Car::Car() {
    price = 0;
    emissions = 0;
}
        
Car::Car(int input_price){
    price = input_price;
    emissions = 0; 
}   // creates a Car with a price

void Car::set_price(int input_price){
    price = input_price;
}
int Car::get_price(){
    return price;
}
        
void Car::set_emissions(int input_emission){
    emissions = input_emission;
}
int Car::get_emissions(){
    return emissions;
}

void Car::drive(int kms) {
    emissions = 20*kms;
}

Car::~Car(){};