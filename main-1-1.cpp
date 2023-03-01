#include <iostream> 

extern int array_sum (int array[] , int n);

int main (){
    int array_test[5] = {1,4,5,2,3};
    std::cout << array_sum(array_test, 5) << std::endl;
    std::cout << array_sum(array_test, 0) << std::endl;
    return 0;
}