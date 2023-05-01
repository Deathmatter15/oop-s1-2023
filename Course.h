#ifndef CourseFifteen
#define CourseFifteen
#include <string>
    class Course {
        private: Person** persons; 
        int course_id; 
        std::string name;
        
        public: 
        void addPerson(Person* new_Register);
        };
#endif