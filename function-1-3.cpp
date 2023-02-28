#include <iostream> 
int num_count (int array[] , int n, int number){ 
    
   int number_count = 0
    
    if (n < 1){
        
        //Retain number_count at 0 if n < 1 

        else if (n >= 1){

            for(int i = 0 ; i < n ; i++){
                
                if (array[i] == number){
                    number_count++;
                }
                
            }
        }
    }

    return number_count
}