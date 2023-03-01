#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array_test_true[5] = {1,3,5,7,9};
    int array_test_false[5] = {1,2,4,3,5};
    
    std::cout << is_ascending(array_test_true,5) << "\n";
    std::cout << is_ascending(array_test_false,5) << "\n";

    return 0;
}