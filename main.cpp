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
Course* COOP = new Course[1];
Adeliade->addCourse(int course_id, std::string name);

//Add a student to a Course 
Student* Smuck = new Student[1];
COOP->addPerson(Person* Smuck);

//Add a grade 
Grade* Workshop1 = new Grade[1];
Gradebook* GradesSmuck = new Gradebook[1];
GradesSmuck-> addGrade(Smuck->getStudentId(), COOP->getCourseId(), Workshop1);
Adelaide->addGradebook(GradesSmuck);

return 0;
}
