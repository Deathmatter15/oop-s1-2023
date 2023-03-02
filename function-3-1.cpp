#include <iostream>
#include <cmath>

bool is_fanarray(int array[], int n){
    int array_fan_true = 0;
    int length_array_half = std::floor(n/2);
    
    if (n<1){
        //Keeps array_fan_true = 0
    }
    else {
        for (int i=0; i < length_array_half ; i++){
            if (array[i] == array[n-1-i] && array[i] <= array[i+1]){
                array_fan_true = 1;
            }
            else {
                array_fan_true = 0;
                break;
            }
        }
    }
    
return array_fan_true;
}