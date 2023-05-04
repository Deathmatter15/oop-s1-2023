#include <iostream> 
#include "Gradebook.h"
using namespace std;

Gradebook::Gradebook(){
    student_id = 0;
    course_id = 0;
    grade = new Grade[1];
}

void Gradebook::addGrade(int new_student_id, int new_course_id, string new_assignment, int new_value){
    student_id = new_student_id;
    course_id = new_course_id;
    grade = new Grade(new_assignment, new_value, new_student_id);
}

Gradebook::~Gradebook(){
    delete grade;
    cout << "Gradebook has been cleared" << endl;
}