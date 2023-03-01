#include <iostream> 
int median_array(int array[], int n){
    int array_median = 0;
    int acending_array[n];

    for (i=0; i<n ; i++) {
    int acending_array[i] = 0;
    } 

    if (n%2==0) || (n < 0) {
        ///keeps median_array = 0;
        else{

            for (i=0; i<n ; i++) {
                int array_element = array[i]

                for (j=i; j<n; j++){

                    if (array_element <= array[j]) {
                        
                        else if (array_element > array[j]){
                            array_element = array[j];

                        }
                    }

                }
                acending_array[i]= array_element; 
            }
            array_median = acending_array[std::ceil(n/2)]
        
        }
    }

return array_median;
}