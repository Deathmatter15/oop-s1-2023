#ifndef ThirtyZeroBike
#define ThirtyZeroBike

#include <string>
class Bike {

private:

public:

std::string Bike_brand; 
int Bike_code;

Bike();
Bike(std::string brand, int code);

std::string get_brand();           
int get_code(); 


};

#endif