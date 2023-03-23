#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n); 
extern PersonList deepCopyPersonList(PersonList pl); 
using namespace std;

int main(){
    PersonList newBook = createPersonList(3);

    PersonList deepNewBook; 
    deepNewBook = deepCopyPersonList(newBook);

    for (int i=0; i<3 ; i++){
    cout << deepNewBook.people[i].name << " " << deepNewBook.people[i].age 
    << " " << deepNewBook.numPeople << endl;
    }
    
    delete[] newBook.people, deepNewBook.people;
    return 0; 
}