#include <iostream> 

extern double array_mean (int array[], int n);

int main (){
    int array_test[5] = {1,4,5,2,3};
    std::cout.precision(2);
    std::cout << array_mean(array_test, 5) << "\n";
    std::cout << array_mean(array_test, 0) << "\n";
    return 0;
}