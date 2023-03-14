#include <iostream> 

int size_of_variable_star_t(){
    int *t = new int;
    int size_t = sizeof(t);
    delete[] t;
    return size_t;
}