#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class Musician {

private:
    std::string instrument;
    int experience;
public:
    std::string get_instrument;       
    int get_experience;               
    Musician();
    Musician(std::string instrument,int experience);

};
#endif
