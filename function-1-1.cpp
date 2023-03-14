#include <iostream> 

int size_of_variable_star_t(){
    int *t = new int;
    int size_t = sizeof(int)*sizeof(t);
    delete t;
    return size_t;
}