#ifndef CarTwentySeven
#define CarTwentySeven
    class Car {

    protected:
        int price;
        int emissions;   // CO2 Emissions

    public:
        Car();
        Car(int input_price);   // creates a Car with a price

        void set_price(int input_price);
        int get_price();
        
        void set_emissions(int input_emission);
        int get_emissions();

        virtual void drive(int kms);
        ~Car();
    };
#endif