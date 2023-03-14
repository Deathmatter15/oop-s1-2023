#include <iostream> 

int size_of_variable_star_arr(){
    int *arr = new int[3];
    int size_t = sizeof(int)*sizeof(arr);
    delete[] arr;
    return size_t;
}