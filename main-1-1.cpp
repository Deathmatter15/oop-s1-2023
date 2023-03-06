#include <iostream> 
#include <cstring>

extern int sum_diagonal (int array[4][4]);
using namespace std;

int main(){
int control_array[4][4], number = 0; 
cout << "Enter the number to fill the array: ";
cin >> number;

for (int i=0; i<4; i++){
    for(int j=0; j<4; j++){
        control_array[i][j] = number;
    }
}

cout << "The sum of matrix diagonals is " << sum_diagonal (control_array) << endl;

return 0;
}