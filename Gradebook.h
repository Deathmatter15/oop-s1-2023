#ifndef GradebookFifteen
#define GradebookFifteen
#include <string>
#include "Grade.h"
    class Gradebook { 
        private: 
        int student_id; 
        int course_id; 
        std::string assignment; 
        int value
        Grade* grade; 

        public:
        void addGrade(int newstudent_id, int newcourse_id, Grade* new_grade);
        };
#endif