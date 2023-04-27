#include <iostream> 
#include "Ford.h"
    Ford::Ford(): Car::Car() {
        badgeNumber = 0;
        litresOfFuel = 60;
    }

    Ford::Ford(int input_badgeNumber, int input_price){
        price = input_price;
        emissions = 0;
    
        badgeNumber = input_badgeNumber;
        litresOfFuel = 60;
    };  

    int Ford::get_badgeNumber(){
        return badgeNumber;
    }
    
    void Ford::set_badgeNumber(int input_badgeNumber){
        badgeNumber = input_badgeNumber;
    }

    float Ford::get_litresOfFuel(){
        return litresOfFuel;
    }
    
    void Ford::set_litresOfFuel(float input_fuel){
        litresOfFuel = input_fuel;
    }

    void Ford::refuel(int litres){
        litresOfFuel += litres;
        if(litresOfFuel > 60) {
            litresOfFuel = 60;
        }
    }

    void Ford::drive(int kms) {
        float kms_driven = kms;
        if (litresOfFuel > kms/5){
            emissions = 234*kms_driven;
            litresOfFuel -= kms_driven/5;
        } else if (litresOfFuel <= kms/5) {
            kms_driven = (litresOfFuel+8)*5;
            emissions = 234*kms_driven;
            litresOfFuel = 0;
        }
    }