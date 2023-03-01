#include <iostream> 

extern int min_element(int array[], int n);

int main () {
    int array[5] = {3,2,4,5,9};
    std::cout << min_element(array,5) << "\n";
    return 0;
}