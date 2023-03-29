#include <iostream>
#include "Musician.h"

Musician::Musician(){
    instrument = "null";
    experience = 0; 
}

Musician::Musician(std::string instrument,int experience){
    set_instrument(instrument);
    set_experience(experience);
}

std::string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience(){
    return experience;
}