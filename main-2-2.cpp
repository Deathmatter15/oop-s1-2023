#include <iostream> 

extern int max_element(int array[], int n);

int main () {
    int array[5] = {3,2,4,5,9};
    std::cout << max_element(array,5) << "\n";
    return 0;
}