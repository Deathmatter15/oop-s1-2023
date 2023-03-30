#ifndef ThirtyBikeYard
#define ThirtyBikeYard

#include "Bike.h"
#include <string>

    class Bike_yard {
        private:

        public:
        int maxBikeCapacity;  
        int currentBikeCapacity; 
        Bike *currentBikes;

        Bike_yard();            // default constructor for yard with zero capacity
        Bike_yard(int capacity);   // constructor for yard that can hold "capacity" bikes

        int get_total_stock_count(); // count of the current number of bikes in yard
        int get_stock_quantity(int code);  // count of the number of bikes with brand code equal to "code"
        Bike *get_current_stock_list(); // gets an array containing all the bikes in the yard

        bool add_stock(Bike b); // tries to add a bike to yard. If there is enough space, return true
                     // and adds bike to the yard. Otherwise, do not save bike, and return false. 
        ~Bike_yard();            // destructor
    };

#endif