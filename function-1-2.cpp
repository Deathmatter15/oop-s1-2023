#include <iostream> 
// Add all elements into a parameter
// Convert parameter to floating variable type 
// Find the avg of the element sum
double array_mean (int array[] , int n){
    
int array_sum = 0;
double array_avg = 0.0;
    
if(n < 1){
    //Keep array_sum = 0
}
        
else if (n >= 1){
            
    for (int i = 0 ; i < n ; i++){
        array_sum = array_sum + array[i];
                
    }
array_avg = static_cast<double>(array_sum);
    array_avg = array_avg/n;
    }

    
    return array_avg;
}