#ifndef CourseFifteen
#define CourseFifteen
#include <string>
    class Course {
        private: Person** persons; 
        int student_id; 
        std::string name;
        
        public: 
        Course();
        void addPerson(Person* new_Register);
        };
#endif