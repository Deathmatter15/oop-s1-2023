#include <iostream> 
#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    int decimal = 0, base = pow(2, number_of_digits-1); 
    
    for(int i = 0; i < number_of_digits ; i++){
        decimal += binary_digits[i]*base;
        base /= 2;  
    }

    return decimal; // return "v-Type" z 
}

