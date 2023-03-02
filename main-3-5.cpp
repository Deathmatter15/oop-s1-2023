#include <iostream> 

extern double sum_even(double array[], int n);

int main(){
    double array_int[5] = {3,2,5,4,6};
    double array_floating[5] = {1.2, 2.8, 3.8, 1.4, 1.9};

    std::cout << sum_even(array_int, 5) << "\n";
    std::cout << sum_even(array_floating, 5) << "\n";

    return 0;
}