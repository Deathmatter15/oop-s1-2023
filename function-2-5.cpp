#include <iostream> 

bool is_descending(int array[], int n){
   bool array_decend = 0;
    int array_previous_element = 0; 
    if (n == 0){
        //keeps array_decend = 0; 
    }

    else {
            array_previous_element = array[0];
            
        for (int i = 1; i < n; i++ ) {
        
            if (array[i] < array_previous_element){
                array_previous_element = array[i];
                array_decend = 1;
            }
            else {
                array_decend = 0;
                break;
        
            }
            
        }
    }
    
    
    return array_decend; 
}