#include <iostream> 

float add_op (float left, float right){
    float sum_float = left + right; 
    return sum_float;
}

float subtract_op (float left, float right){
    float sub_float = left - right; 
    return sub_float;
}

float arithmetic_ops(float left, float right, std::string op){
    if (op == "+") {
        return add_op(left, right);
    } else if (op == "-") {
        return subtract_op(left, right);
    } else {
        return -13; 
    }
}