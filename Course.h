#ifndef CourseFifteen
#define CourseFifteen
#include <string>
#include "Person.h"
    class Course {
        private: Person** persons; 
        int course_id; 
        std::string course_name;
        
        public: 
        Course();
        Course(int new_course_id, std::string new_course_name);
        void addPerson(Person* new_Register);
        };
#endif