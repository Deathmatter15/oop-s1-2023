#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main (){

    int array_test1[5] = {2,3,7,1,9};
    int array_test2[5] = {3,4,5,1,7};

    std::cout << sum_two_arrays(array_test1, array_test2, 5) << std::endl;
    std::cout << sum_two_arrays(array_test1, array_test2, 0) << std::endl;
    return 0;
}