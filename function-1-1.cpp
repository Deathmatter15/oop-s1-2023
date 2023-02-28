#include <iostream> 
//function that returns sum of all elements in a array
//Input is the int array and the number of elements
//Return 0 if n < 1
int array_sum (int array[] , int n){
    int array_sum = 0;
    
    if (n < 1){
        //Keep array_sum = 0

        else if (n >= 1){

            for (int i = 0 ; i < n ; i++){
                array_sum += array[i];

            }
        }
    }

    return array_sum // return "z" 
}