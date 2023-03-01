#include <iostream> 

extern int num_count (int array[] , int n, int number)

int main (){
    int array_test[7] = {1,2,5,1,1,2,7};
    std::cout << num_count (array_test , 7, 1) << std::endl;
    std::cout << num_count (array_test , 7, 2) << std::endl;
    std::cout << num_count (array_test , 0, 7) << std::endl;
    return 0;
}