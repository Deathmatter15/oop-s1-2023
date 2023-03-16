#include <iostream> 
bool is_array_palindrome(int integers[], int length) {
    bool palindrome_switch = -1; 
    if(length <= 0){
        
    }else{
        for (int i = 0; i < length/2 ; i++){
            if (integers[i] == integers[length-1] && integers[i] < integers[i+1]){
                palindrome_switch = 1;
            }else{
                palindrome_switch = -2;
                break;
            }
        }
    
    }
    return palindrome_switch;
}

int palindrome_sum(int integers[], int length) {
    int palindrome_sum = 0; 
    if(length <= 0){
        int palindrome_sum = -1;
    }else if(is_array_palindrome(integers, length) > 0){
    for (int i = 0; i< length; i++){
        palindrome_sum += integers[i];
    }
    }else{
        palindrome_sum = -2;
    }
    return palindrome_sum;
}

int sum_integers(int integers[], int length) {
    int element_sum = -2; 
    if(length <= 0){
        
    }else{
    for (int i = 0; i< length; i++){
        element_sum += integers[i];
    }
    }
    return element_sum; 
}