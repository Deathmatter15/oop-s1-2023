#ifndef StudentFifteen
#define StudentFifteen
#include <string>
#include "Person.h"
    class Student: public Person{
        private: 
        int student_id;

        public:
        Student();
        Student(std::string new_name, int new_student_id);
        int getId();
    };
#endif