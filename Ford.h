#ifndef FordTwentySeven
#define FordTwentySeven
    #include "Car.h"
    class Ford: public Car {
        private:
        int badgeNumber;
        float litresOfFuel;      // Initially 60L

        public:
        Ford();            
        Ford(int badgeNumber, int price);  

        int get_badgeNumber();
        void set_badgeNumber(int input_badgeNumber);

        float get_litresOfFuel();
        void set_litresOfFuel(float input_fuel);

        void refuel(int litres);
        void drive(int kms) override;   
    };
#endif