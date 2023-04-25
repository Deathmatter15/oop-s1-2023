#include <iostream> 
#include "TV.h"
#include "Appliance.h"
using namespace std;

int main(){
TV *Yoga = new TV(5,200);
cout << Yoga ->getPowerConsumption() << endl;
delete Yoga;
}