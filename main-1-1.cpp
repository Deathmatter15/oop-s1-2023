#include <iostream> 
extern int *readNumber();
extern void printNumbers(int *numbers, int length);
using namespace std; 

int main() { 
    printNumbers(readNumber(), 10);
    return 0;
}