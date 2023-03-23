#include <iostream> 
#include "Person.h"

PersonList deepCreatePersonList(PersonList pl){
    PersonList Book; 
    Book.people = new Person[n];

    Book.people[i].name = pl.people[i].name;
    Book.people[i].age = pl.people[i].age;
    Book.numPeople = pl.numPeople;  
    
    return Book;
}