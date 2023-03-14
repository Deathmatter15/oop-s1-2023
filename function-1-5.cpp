#include <iostream> 

int size_of_variable_arr(){
    int *arr = new int[3];
    int size_t = 0;
    size_t = sizeof(int)*3;
    delete[] arr;
    return size_t;
}