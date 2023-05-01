#ifndef UniFifteen
#define UniFifteen
#include <string>
    class University { 
        private: 
        Gradebook* gradebook;
        Course* course; 
        std::string name; 
        std::string location;

        public: 
        void addCourse(int id, std::string name);
        void addGradebook(Gradebook* new_gradebook);
        };
#endif