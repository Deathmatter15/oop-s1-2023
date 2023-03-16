#include <iostream> 
extern int bin_to_int(int binary_digits[], int number_of_digits);
using namespace std; 

int main(){
    int binary_size = 7; 
    int binary_digits[binary_size] = {1,0,0,0,1,0,1};
    cout << bin_to_int(binary_digits, binary_size) << endl;
    return 0; 
}