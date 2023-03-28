#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class Musician {

private:
    std::string instrument;
    int experience;  

public:    

Musician();
Musician(std::string instrument,int experience);

void set_instrument(std::string instrument_set) {
    instrument = instrument_set;
}; 
void set_experience(int experience_set) {
    experience = experience_set;
};

std::string get_instrument();

int get_experience();

};
#endif
