#include <iostream>
using namespace std;

int main() {
   int decimal, binary = 0, base = 1;
 
   cout << "Enter a decimal number: ";
   cin >> decimal;
 
   while (decimal > 0) {
      binary += (decimal % 2) * base;
      decimal = decimal/2;
      base = base*10;
   }
 
   cout << "Base 2 value is " << binary << endl;
   return 0;
}