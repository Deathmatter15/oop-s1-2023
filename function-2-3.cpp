#include <iostream> 

void two_five_nine(int array[], int n) {
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    if (n < 1) {
        //retain values for num_* = 0
    }
    else if(n >= 1){
                
        for(int i=0; i<n; i++){
            //count number of 2s, 5s, and 9s in the array 

            if(array[i] == 2){
                num_twos++;

            }
            
            else if(array[i] == 5){
                num_fives++;

            }
            
            else if(array[i] == 9){
                num_nines++;

            }
        }
                
    }
    printf ("2:%d;5:%d;9:%d;\n", num_twos, num_fives, num_nines);
    
    return;
}