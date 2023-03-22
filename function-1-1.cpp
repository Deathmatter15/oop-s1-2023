#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
    Person* entity = new Person[n];
    for (int i = 0; i < n; i++){
        entity[i].name = "John Doe";
        entity[i].age = 0;
    }
    return entity; 
}
