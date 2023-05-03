#include <iostream>
#include "University.h"
#include "Student.h"
#include "Gradebook.h"
#include "Grade.h"

University::University(){
    name = "N/A";
    location = "N/A";

}

University::University(std::string register_name, std::string register_location){
    name = register_name;
    location = register_location;
    
}

void University::addCourse(int new_course_id, std::string new_name){
    course = new Course(new_course_id, new_name);
}

void University::addPerson(Person* new_Register){
    course->addPerson(new_Register);
}

University::~University(){
    delete course;
    std::cout << "Uni course has been deleted" << std::endl;
}