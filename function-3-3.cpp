#include <iostream> 
double weighted_average(int array[], int n) {
    
    double array_weighted_average = 0;
    if (n<1){
        //Keep array_weighted_average = 0
    }
    
    else{
            
        for(int i=0; i<n; i++){
            int array_element_count = 0;

            for (int j=0; j<n; j++) {
                if (array[i]==array[j]){
                    array_element_count++;
                }
            }
            
            array_weighted_average += static_cast<double>(array[i]*array_element_count);
            
        }
        array_weighted_average = array_weighted_average/n;
    }
    
    return array_weighted_average;
}