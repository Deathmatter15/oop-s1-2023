#include <iostream> 
#include "Person.h"

extern Person* createPersonArray(int n);
using namespace std; 

int main(){
    Person* arr = createPersonArray(3); 
    for( int i = 0; i < 3; i++){
        cout << arr[i].name << " " <<
        arr[i].age << endl;
    }

    delete[] arr;
    return 0; 
}