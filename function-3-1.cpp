#include <iostream>

bool is_fanarray(int array[], int n){
    int fanarray_true = 0;
    if (n<1){
        //Keeps fanarray_true = 0
        else {
            for (i=0; i< std::floor(n/2) ; i++){
                if (array[i] == array[n-i], array[i] <= array[i+1])
                 fanarray_true = 1;
                 else {
                 fanarray_true = 0;
                 break;
                 }
            }
        }
    }
    
return fanarray_true;
}