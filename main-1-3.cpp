#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n); 
extern PersonList deepCreatePersonList(PersonList pl); 
using namespace std;

int main(){
    PersonList newBook = createPersonList(3);

    PersonList deepNewBook; 
    deepNewBook = deepCreatePersonList(newBook);

    for (int i=0; i<3 ; i++){
    cout << deepNewBook.people[i].name << " " << deepNewBook.people[i].age 
    << " " << deepNewBook.numPeople << endl;
    }
    
    delete[] newBook.people, deepNewBook.people;
    return 0; 
}