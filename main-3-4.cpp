#include <iostream> 
extern void print_pass_fail (char grade);

int main (){

    char grade_pass = 'A';
    char grade_fail = 'E';
    char grade_nothing ='F';

    print_pass_fail(grade_pass);
    print_pass_fail(grade_fail);
    print_pass_fail(grade_nothing);

    return 0;
}