#ifndef GradeFifteen
#define GradeFifteen
#include <string>
    class Grade { 
        private: 
        std::string assignment; 
        int value; 
        int student_id;
        
        public:
        Grade();
        Grade(std::string new_assignment, int new_value, int new_student_id);
        };
#endif