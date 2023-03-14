#include <iostream>

float multiply_op(float left, float right) {
    float tim_float = left*right; 
    return tim_float;
}
float arithmetic_ops(float left, float right, float (*op)(float,float))
{
	return (*op)(left, right);
}
