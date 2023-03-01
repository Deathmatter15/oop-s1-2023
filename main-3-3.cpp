#include <iostream> 

extern double weighted_average(int array[], int n);

int main() {
    int array_test_whole[5] = {1,2,3,2,1};
    int array_test_decimal[5] = {1,2,2,2,1};
    std::cout << weighted_average(array_test_whole, 5) << "\n"; // Value of 3.0
    std::cout << weighted_average(array_test_decimal, 5) << "\n"; // Value of 4.4
    std::cout << weighted_average(array_test_whole, 0) << "\n";

    return 0;
}