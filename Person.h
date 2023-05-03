#ifndef PersonFifteen
#define PersonFifteen
#include <string>
    class Person { 
        protected: 
        std::string name;
        int student_id;

        public: 
        Person();
        Person(std::string new_name);
        std::string getname(); 
        int getId();
    };
        
#endif