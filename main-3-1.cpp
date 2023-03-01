#include <iostream> 

extern bool is_fanarray(int array[], int n);

int main() {
    int array_fanTrue_odd[5] = {1,2,3,2,1};
    int array_fanTrue_even[4] = {2,5,5,2};
    int array_fanFalse[4] = {1,2,3,4};

    std::cout << is_fanarray(array_fanTrue_odd, 5) << "\n";
    std::cout << is_fanarray(array_fanTrue_even, 4) << "\n";
    std::cout << is_fanarray(array_fanFalse, 4) << "\n";
    std::cout << is_fanarray(array_fanFalse, 0) << "\n";

    return 0;