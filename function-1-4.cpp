#include <iostream> 

int sum_two_arrays (int array[], int secondarray[], int n) {
    int arrays_sum = 0;
    if (n<1 ){
        //retain array_sum = 0;
    }
    
    else if (n>=1) {

        for (int i=0; i<n ; i++){
            arrays_sum += array[i] + secondarray[i];
        }
    }
    

    return arrays_sum;
}