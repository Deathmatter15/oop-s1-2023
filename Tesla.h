#ifndef TeslaTwentySeven
#define TeslaTwentySeven
#include "Car.h"
    class Tesla: public Car {

        private:
        char model;
        float batteryPercentage;    // Initially 100%

        public:

        Tesla();            
        Tesla(char input_model, int input_price); 

        void set_model(char input_model);
        char get_model();

        void set_batteryPercentage(float input_percentage);
        float get_batteryPercentage();
  
        void chargeBattery(int mins);            
        void drive(int kms) override;

        ~Tesla();       
    };
#endif