#include <iostream> 
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
extern int* equalsArray(int *numbers, int length);
using namespace std; 

int main() { 
    int *numbers = readNumbers(); 
    cout << endl;
    int* numbers1 = equalsArray(numbers, 10);
    
    for (int i = 0; i < 10; i++){
        cout << numbers1[i] << endl;
    }
    delete[] numbers, numbers1;
    return 0;
}