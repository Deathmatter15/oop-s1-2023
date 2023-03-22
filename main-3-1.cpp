#include <iostream> 
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
bool equalsArray(int *numbers1,int *numbers2,int length);
using namespace std; 

int main() { 
    int *numbers1 = readNumbers(); 
    int *numbers2 = readNumbers(); 
    cout << endl;
    cout << equalsArray(numbers1, numbers2, 10) << endl;
    delete[] numbers1, numbers2;
    return 0;
}