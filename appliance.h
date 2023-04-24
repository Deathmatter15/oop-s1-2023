#ifndef ApplianceTwentyFour
#define ApplianceTwentyFour

class Appliance {

private:
int powerRating;
bool isOn;

public:
Appliance();
Appliance(int powerRating); // creates an Appliance with a power rating

void set_powerRating(int powerRating);
int get_powerRating();

bool get_isOn();

void turnOn();
void turnOff();
virtual double getPowerConsumption();
~Appliance();
};

#endif