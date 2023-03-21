#include <iostream> 
extern int *readNumber();
extern void printNumbers(int *numbers, int length);
extern void hexDigits(int *numbers, int length);
using namespace std; 

int main() { 
    int *numbers = readNumber(); 
    hexDigits(numbers, 10);
    delete[] numbers;
    return 0;
}