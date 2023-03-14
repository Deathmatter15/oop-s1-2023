#include <iostream>

float multiply_op(float left, float right) {
    float tim_float = left*right; 
    return tim_float;
}

float add_op (float left, float right){
    float sum_float = left + right; 
    return sum_float;
}

float subtract_op (float left, float right){
    float sub_float = left - right; 
    return sub_float;
}

float arithmetic_ops(float left, float right, float (*op)(float,float))
{
	return (*op)(left, right);
}
