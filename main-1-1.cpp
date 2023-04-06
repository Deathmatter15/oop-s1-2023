#include <iostream> 
#include "vehicle.h"
using namespace std;

int main(){
std::string vehicle_type[3] = {"Cars", "Buses", "Motorbikes"};
int vehicle_amount[3] = {0,0,0};

for (int i=0; i<3; i++) {
cout << "Provide the number of " << vehicle_type[i] << " you would like to park: ";
std::cin >> vehicle_amount[i];
}

Car *cars = new Car [vehicle_amount[0]];
Bus *buses = new Bus [vehicle_amount[1]];
Motorbike *motorbikes = new Motorbike [vehicle_amount[2]];

cout << cars[0].getParkingDuration() << endl;

delete cars, buses, motorbikes;

return 0;
}