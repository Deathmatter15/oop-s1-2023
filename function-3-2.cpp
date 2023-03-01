#include <iostream> 
#include <cmath>
int median_array(int array[], int n){
    int array_median = 0;
    int acending_array[n] = {0};
    int array_median_element = std::ceil(n/2);
    int array_element = 0;

    for (int i=0; i<n ; i++) {
        acending_array[i] = 0;
    } 

    if (n%2==0 || n < 0) {
        ///keeps median_array = 0;
    }
    
    else{

        for (int i=0; i<n ; i++) {
            array_element = array[i];

            for (int j=i; j<n; j++){

                if (array_element <= array[j]) {
                    //keeps array element
                }
                else if (array_element > array[j]){
                    array_element = array[j];

                }
            }
        acending_array[i]= array_element; 

        }
    }
    array_median = acending_array[array_median_element];
    
    return array_median;
}