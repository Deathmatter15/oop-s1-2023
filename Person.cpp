#include <iostream> 
#include "Person.h"
Person::Person(){
    name = "N/A";
}

Person::Person(std::string new_name){
    name = new_name;
}

std::string Person::getname(){
    return name;
}

int Person::getId(){
    return student_id;
}