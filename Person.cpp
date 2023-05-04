#include <iostream> 
#include "Person.h"
Person::Person(){
    name = "N/A";
    student_id = 0;
}

Person::Person(std::string new_name){
    name = new_name;
    student_id = 0;
}

std::string Person::getname(){
    return name;
}

int Person::getId(){
    return student_id;
}