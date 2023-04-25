#include <iostream> 
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"
#include "House.h"
using namespace std;

int main(){
Fridge *Coppenhein = new Fridge(5,200);
TV *Benq = new TV(5, 200);
Appliance *Base = new Appliance(2);

House *Hans = new House(3);
cout << "Checkpoint 1" << endl;
cout << Hans->addAppliance(Coppenhein) << endl;
cout << Hans->addAppliance(Benq) << endl;
cout << Hans->addAppliance(Base) << endl;

cout << Hans->getTotalPowerConsumption()<< endl;

delete Coppenhein;
delete Benq;
delete Base;

return 0;
}