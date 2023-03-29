#include <iostream>
#include "Musician.h"
#include "Orchestra.h"

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

Orchestra::Orchestra() {
    max_size = 0;
    member_count = 0;
};           

// constructor for an orchestra of given size
Orchestra :: Orchestra(int size){   
    max_size = size;
    member_count = 0;
    members = new Musician[size];
};

int Orchestra :: get_current_number_of_members(){
    return member_count; 
};

bool Orchestra:: has_instrument(std::string instrument){
    for (int i=0; i < member_count; i++) {
        if (members[i].get_instrument() == instrument){
            return true;
        }
    }
    return false; 
};

Musician* Orchestra::get_members(){
    return members; 
}; 

bool Orchestra::add_musician(Musician new_musician) {
    if (member_count < max_size) {
        members[member_count] = new_musician;
        member_count++; 
        return true;
    }
    return false;
}

Orchestra::~Orchestra() {}