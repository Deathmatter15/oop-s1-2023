#include <iostream> 
#include "Student.h"

Student::Student(): Person::Person(){
student_id = 0;
}

Student::Student(std::string new_name, int new_student_id){
    name = new_name;
    student_id = new_student_id;
}