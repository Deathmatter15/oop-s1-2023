#include <iostream> 

extern int is_identity(int array[10][10]);
using namespace std; 

int main(){

    int array1[10][10];

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            if (i == j){
                array1[i][j] = 1;
            } else {
                array1[i][j] = 0;
            }
        }
    }

    int array0_1[10][10];

    for (int i; i<10; i++){
        for (int j; j<10; j++){
            array0_1[i][j] = 0;

        }
    }

    int array0_2[10][10];

    for (int i; i<10; i++){
        for (int j; j<10; j++){
            array0_2[i][j] = 5;
            
        }
    }
    
    cout << "Returned value is " << is_identity(array1) << "\n";
    cout << "Returned value is " << is_identity(array0_1) << "\n";
    cout << "Returned value is " << is_identity(array0_2) << endl;

    return 0;
}