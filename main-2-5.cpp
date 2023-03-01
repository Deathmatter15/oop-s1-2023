#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array_test_true[5] = {9,7,5,3,1};
    int array_test_false[5] = {1,2,4,3,5};
    
    std::cout << is_descending(array_test_true,5) << "\n";
    std::cout << is_descending(array_test_false,5) << "\n";

    return 0;
}