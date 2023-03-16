#include <iostream> 

int bin_to_int(int binary_digits[], int number_of_digits){
    int number_value = 0; 
    int base = 1;

    for (int i = 0; i < number_of_digits-1; i++){
        base *= 2;
    }

    for (int i = 0; i < number_of_digits ; i++){
        number_value += binary_digits[i] * base;
        base /= 2;
    }

    return number_value; 
}