#include <iostream> 
extern void print_scaled(int array[3][3], int scale);

int main(){

    int fill_array[3][3] = {{2,2,2}, {2,2,2}, {2,2,2}}, sequence_array[3][3] ={{1,2,3}, {4,5,6}, {7,8,9}};
    print_scaled(fill_array, 3);
    print_scaled(sequence_array, 4);
    
    return 0; 
}