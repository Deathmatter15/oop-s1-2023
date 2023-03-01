#include <iostream> 

extern void two_five_nine(int array[], int n);

int main() {
    int array_test[6] = {2,5,5,9,9,9};
    two_five_nine(array_test, 6);
    return 0;
}