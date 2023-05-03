#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Course.h"
#include "Gradebook.h"
#include "Grade.h"

University::University(){
    name = "N/A"
    location = "N/A"
    course = new Course[1];
    gradebook = new Gradebook[1]
}

University::University(std::string register_name, std::string register_location){
    name = register_name;
    location = regiser_location;
    course = new Course[1];

    gradebook = new Gradebook[1]
    gradebook->addGrade(0, 0, "N/A", 0);
}
void addCourse(int id, std::string name){}
void addGradebook(Gradebook* new_gradebook)