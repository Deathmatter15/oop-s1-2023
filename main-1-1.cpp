#include <iostream> 
extern void print_matrix(int array[10][10]);
using namespace std; 

int main(){
    int ten_ten_array[10][10];
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            ten_ten_array[i][j] = 2;
        }
    } 
    print_matrix(ten_ten_array);
    return 0; 
}