#include <iostream> 
using namespace std;

int main(){

int binary = 0, base = 10; 
cout << "Enter a binary number: ";
cin >> binary;

binary = binary*base;

cout << "Shifting left is " << binary << endl;
}