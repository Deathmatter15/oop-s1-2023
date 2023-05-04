#ifndef GradebookFifteen
#define GradebookFifteen
#include <string>
#include "Grade.h"
    class Gradebook { 
        private: 
        int student_id; 
        int course_id;
        Grade* grade; 

        public:
        Gradebook();
        void addGrade(int newstudent_id, int newcourse_id, std::string new_assignment, int new_value);
        ~Gradebook(); 
        };
#endif