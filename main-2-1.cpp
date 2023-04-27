#include <iostream> 
#include "Car.h"
#include "Tesla.h"
using namespace std;

int main(){
Tesla *Nervos = new Tesla();
Nervos->drive(1000);
cout << Nervos->get_emissions() << endl;
}