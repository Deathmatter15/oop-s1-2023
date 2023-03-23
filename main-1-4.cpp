#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n);
extern PersonList shallowCopyPersonList(PersonList pl); 
using namespace std;

int main(){
    PersonList newBook = createPersonList(3);

    PersonList deepNewBook; 
    deepNewBook = shallowCopyPersonList(newBook);

    for (int i=0; i<deepNewBook.numPeople; i++){
        cout << deepNewBook.people[i].name << " " << deepNewBook.people[i].age 
    << " " << deepNewBook.numPeople << endl;
    }
    
    delete[] newBook.people;
    return 0; 
}