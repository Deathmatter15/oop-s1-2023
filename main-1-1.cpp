#include <iostream> 
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
using namespace std; 

int main() { 
    int *numbers = readNumber();
    printNumbers(numbers, 10);
    delete numbers;
    return 0;
}