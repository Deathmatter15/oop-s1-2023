#include <iostream> 
#include "Person.h"
#include "Student.h"
#include "Course.h"


Course::Course(){
    persons = new Person*[1];
    student_id = 0;
    name = "N/A";
}

void Course::addPerson(Person* new_Register){
    *persons = new_Register;
    student_id = new_Register->getId();
    name = new_Register->getname();
};