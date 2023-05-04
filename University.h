#ifndef UniFifteen
#define UniFifteen
#include <string>
#include "Course.h"
#include "Person.h"
    class University { 
        private: 
        Course* course; 
        std::string name; 
        std::string location;

        public: 
        University();
        University(std::string register_name, std::string regiser_location);
        void addCourse(int id, std::string name);
        Course* getCourse();
        void addPerson(Person* new_Register);
        ~University();
        
        };
#endif