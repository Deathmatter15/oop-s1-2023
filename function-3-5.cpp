#include <iostream>

double sum_even(double array[], int n){
    double array_sum_evenPosition = 0;
    if (n<1){
        //retain array_sum_evenPosition = 0
    }
    
    else{

        for (int i=0; i<n; i+=2){
            array_sum_evenPosition += array[i];
        }
    }
    
    return array_sum_evenPosition;
}