#include <iostream>
#include "Bike_yard.h"
#include "Bike.h"

    // default constructor for yard with zero capacity
    Bike_yard::Bike_yard(){
        maxBikeCapacity = 0;
        currentBikeCapacity =0;
    }            
    
    // constructor for yard that can hold "capacity" bikes
    Bike_yard::Bike_yard(int capacity) {
        maxBikeCapacity = capacity;
        currentBikeCapacity = 0; 
        currentBikes = new Bike[capacity]; 
    }   

    // count of the current number of bikes in yard
    int Bike_yard::get_total_stock_count(){
        return currentBikeCapacity;
    }  

    // count of the number of bikes with brand code equal to "code"
    int Bike_yard::get_stock_quantity(int code){
        int code_match_counter = 0;
        for (int i=0; i<currentBikeCapacity; i++) {
            if(currentBikes[i].Bike_code == code) {
                code_match_counter++;
            }
        }
        return code_match_counter;
    }  
    
    // gets an array containing all the bikes in the yard
    Bike *Bike_yard::get_current_stock_list(){
        return currentBikes;
    }; 

    bool Bike_yard::add_stock(Bike b) {
        if(currentBikeCapacity >= maxBikeCapacity){
            currentBikes[currentBikeCapacity] = b;
            currentBikeCapacity++;
            return true;
        }
        return false;
    }; // tries to add a bike to yard. If there is enough space, return true
                     // and adds bike to the yard. Otherwise, do not save bike, and return false. 