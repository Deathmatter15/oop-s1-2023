#include <iostream>
#include "Musician.h"

Musician::Musician(){
    get_instrument = "null";
    get_experience = 0; 
}

Musician::Musician(std::string instrument,int experience){
    get_instrument = instrument;
    get_experience = experience;
}
