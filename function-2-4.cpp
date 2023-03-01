#include <iostream>

bool is_ascending(int array[], int n) {
    bool array_acsend = 0;
    int array_previous_element = 0; 
    if (n == 0){
        //keeps array_acsend = 0; 

        else {
            array_previous_element = array[0];
            
            for (i = 1; i < n; i++ ) {
                if (array[i]>array_previous_element){
                array_previous_element = array[i];
                    array_acsend = 1;

                    else {
                     array_acsend = 0;

                     break;
                    }
                }
            }
        }
    }
    
    return array_acsend; 
}