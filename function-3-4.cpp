#include <iostream> 
void print_pass_fail(char grade){
    char grade_A = 'A';
    char grade_B = 'B';
    char grade_C = 'C';
    char grade_D = 'D';
    char grade_E = 'E';
    
    if(grade != grade_A && grade != grade_B && grade != grade_C && grade != grade_D && grade != grade_E){
        printf("Nothing\n");
    }
    
    else if (grade == grade_A || grade == grade_B || grade == grade_C){
        printf("Pass\n");
    }
    
    else if(grade == grade_D || grade == grade_E){
        printf("Fail\n");
    }
    
return;
}