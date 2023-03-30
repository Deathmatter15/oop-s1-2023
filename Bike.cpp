#include <iostream> 
#include "Bike.h"

Bike::Bike() {
    Bike_brand = "";
    Bike_code = 0;
}

Bike::Bike(std::string brand, int code) {
    Bike_brand = brand;
    Bike_code = code; 
}

std::string Bike::get_brand(){
    return Bike_brand;
}

int Bike::get_code(){
    return Bike_code;
} 