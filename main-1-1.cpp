#include <iostream> 
#include "Appliance.h"
using namespace std;

int main(){
 //Testing initialisation of values and constructors

Appliance *Null = new Appliance();
cout << "The power rating is " << Null -> get_powerRating() << endl;
Appliance *Red = new Appliance(3);
cout << "The power rating is " << Red -> get_powerRating() << endl;
Null -> set_powerRating(3);
cout << "The power rating is " << Null -> get_powerRating() << endl;

//Testing constructors on and off
Null -> turnOn();
cout << "It is " << Null -> get_isOn() << " that the device is on." << endl;
Null -> turnOff();
cout << "It is " << Null -> get_isOn() << " that the device is on." << endl;
Null -> get_isOn();

delete Null;
delete Red;
}