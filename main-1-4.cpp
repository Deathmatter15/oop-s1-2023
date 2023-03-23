#include <iostream> 
#include "Person.h"
extern PersonList createPersonList(int n); 
using namespace std;

int main(){
    PersonList newBook = createPersonList(3); 
    for (int i=0; i<3; i++){
        cout << newBook.people[i].name << " " << newBook.people[i].age 
        << " " << newBook.numPeople << endl;
    }

    delete[] newBook.people;
    return 0; 
}