#include <iostream> 
#include "University.h"
#include "Gradebook.h"
#include "Grade.h"
#include "Course.h"
#include "Person.h"
#include "Instructor.h"
#include "Student.h"
int main(){ 
//Create a New University 
University* Adelaide = new University[1];

//Add a Course to Uni
Adelaide->addCourse(111, "Chess");

//Add a student to a Course 
Student* Smuck = new Student("John Cena", 101);
Adelaide->addPerson(Smuck);

//Add a grade 
Gradebook* Chess = new Gradebook[1]; 
Chess->addGrade(101,111,"Bongcloud Opening", 0);

delete[] Adelaide; 
return 0;
}
