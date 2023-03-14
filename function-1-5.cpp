#include <iostream> 

int size_of_array_arr(){
    int *arr = new int[3];
    int size_t = sizeof(int)*3;
    delete[] arr;
    return size_t;

}