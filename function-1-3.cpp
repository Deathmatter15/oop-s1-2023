#include <iostream> 
#include "Person.h"

PersonList createPersonList(int n){
    PersonList Book; 
    Book.people = new Person[n];
    for (int i=0; i<n; i++) {
        Book.people[i].name = "Jane Doe";
        Book.people[i].age = 1;
        Book.numPeople = n;  
    }
    return Book;
}
