#include <iostream> 

extern float arithmetic_ops(float left, float right, std::string op);
using namespace std;

int main (){
    float first = 2.2;
    float second = 1.1; 

    cout << arithmetic_ops(first, second, "+") << endl;
    cout << arithmetic_ops(first, second, "-") << endl;

    return 0;
}