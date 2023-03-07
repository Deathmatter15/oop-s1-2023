#include <iostream> 
extern int binary_to_int(int binary_digits[], int number_of_digits);
using namespace std;

int main(){
    int binary[7] = {1,0,0,0,1,0,1};
    cout << binary_to_int(binary, 7) << endl; 
    //Body
    return 0;
}