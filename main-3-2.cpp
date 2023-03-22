#include <iostream> 
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern int *reverseArray(int *numbers, int length);
using namespace std; 

int main() { 
    int *numbers = readNumbers(); 
    cout << endl;
    int* numbers1 = reverseArray(numbers, 10);
    
    for (int i = 0; i < 10; i++){
        cout << numbers1[i] << endl;
    }
    delete[] numbers, numbers1;
    return 0;
}