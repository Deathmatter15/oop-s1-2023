#include <iostream> 
extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);
using namespace std; 

int main() { 
    int *numbers = readNumbers(); 
    cout << endl;
    cout << secondSmallestSum(numbers, 10) << endl;;
    delete[] numbers;
    return 0;
}