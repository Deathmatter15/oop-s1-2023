#include <iostream> 
extern Person* createPersonArray(int n);
using namespace std; 

int main(){
    Person* array = createPersonArray(3); 
    for( int i = 0; i < 3; i++){
        cout << array[i].name << " " <<
        array[i].age << endl;
    }

    delete[] arr; 
    return 0; 
}