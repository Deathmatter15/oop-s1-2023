#include <iostream> 
#include "Person.h"
#include "Student.h"
#include "Course.h"


Course::Course(){
    persons = new Person*[1];
    course_id = 0;
    course_name = "N/A";
}

Course::Course(int new_course_id, std::string new_course_name){
     persons = new Person*[1];
    course_id = new_course_id;
    course_name = new_course_name;
}

void Course::addPerson(Person* new_Register){
    *persons = new_Register;
}