#include <iostream>

extern int median_array(int array[], int n);

int main (){
    int array_test[5] = {3,2,4,5,1};
    std::cout << median_array(array_test, 5) << "\n";
    std::cout << median_array(array_test, 0) << "\n";

    return 0;
}