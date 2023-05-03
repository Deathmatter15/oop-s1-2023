#include <iostream> 
#include "Grade.h"

Grade::Grade(){
    assignment = "None";
    value = 0;
};

Grade::Grade(std::string new_assignment, int new_value, int new_student_id){
    assignment = new_assignment;
    value = new_value;
    student_id = new_student_id;
};

