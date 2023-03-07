#include <iostream> 

int sum_min_max(int integers[], int length){

    int maxmin_sum = -1, minimum_element = integers[0], max_element = integers[0];
    
    if(length > 0){   
        
        for (int i = 1; i < length; i++){
            if(integers[i] < minimum_element){
                minimum_element = integers[i];
            }
        }

        for (int i = 1; i < length; i++){
            if(integers[i] > max_element){
                max_element = integers[i];
            }
        }

        maxmin_sum = max_element + minimum_element;

    }else{
        //keep minimum_element as -1
    }
    return maxmin_sum;
}
int array_min(int integers[], int length){
    int minimum_element = -1;
    minimum_element = integers[0];
    
    if(length > 0){   
        for (int i = 1; i < length; i++){
            if(integers[i] < minimum_element){
                minimum_element = integers[i];
            }
        }
    }else{
        //keep minimum_element as -1
    }
    return minimum_element;
}

int array_max(int integers[], int length){
    int max_element = -1;
    max_element = integers[0];
    
    if(length > 0){   
        for (int i = 1; i < length; i++){
            if(integers[i] > max_element){
                max_element = integers[i];
            }
        }
    }else{
        //keep max_element as -1
    }
    return max_element;
}