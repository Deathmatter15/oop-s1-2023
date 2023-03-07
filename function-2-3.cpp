#include <iostream> 

int sum_if_palindrome(int integers[], int length){
    int sum_palindrome = 0, true_palindrome = 0; 
    if(length < 1){
        sum_palindrome = -1;
        goto endloop;
    }
    for(int i = 0; i < length/2; i++){
        if(integers[i] == integers[length-1]){
            true_palindrome = 1;
        }else{
            // keep true_palindrome
            break;
        }

    }
    
    if (true_palindrome == 1){
        for (int i = 0; i < length; i++){
            sum_palindrome += integers[i];
        }
        }else{
            sum_palindrome = -2;
        }
    endloop:

    return sum_palindrome;
}

bool is_palindrome(int integers[], int length){
    bool true_palindrome = 0;
    if(length < 1){
        true_palindrome = 0;
        goto endloop;
    }

    for(int i = 0; i < length/2; i++){
        if(integers[i] == integers[length-1]){
            true_palindrome = 1;
        }else{
            // keep true_palindrome
            break;
        }
    }

    endloop:
    return true_palindrome;
}

int sum_array_elements(int integers[], int length){
    int array_sum = 0;

    if(length < 1){
        array_sum = -1;
        goto endloop;
    }

    for(int i = 0; i < length ; i++){
        array_sum += integers[i];
    }
    endloop:
    return array_sum; 
}
