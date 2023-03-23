#include <iostream> 
#include "Person.h"
extern PersonList deepCreatePersonList(PersonList pl); 
using namespace std;

int main(){
    PersonList newBook; 
    newBook.people.name = "Jane Doe";
    newBook.people.age = 1; 
    newBook.numPeople = 3;

    PersonList deepNewBook; 
    deepNewBook = deepCreatePersonList(newBook);

    cout << deepNewBook.people.name << " " << deepNewBook.people.age 
    << " " << deepNewBook.numPeople << endl;
    
    delete[] deepNewBook.people;
    return 0; 
}