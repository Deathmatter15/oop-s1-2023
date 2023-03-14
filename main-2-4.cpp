#include <iostream> 
extern float multiply_op(float left, float right);
extern float arithmetic_ops (float left, float right, float (*op)(float, float));
using namespace std; 

int main() {
    float first = 2.2;
    float second = 1.1;   
    cout << arithmetic_ops (first, second, &multiply_op) << endl;
    return 0;
}