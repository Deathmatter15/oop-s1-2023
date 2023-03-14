#include <iostream> 

int size_of_variable_star_arr(){
    int *arr = new int[3];
    for (int i = 0; i < 3; i++){
        arr[i]=1;
    }
    int size_t = 0;
    sizeof(int)*sizeof(arr);
    delete arr;
    return size_t;
}