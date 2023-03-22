#include <iostream>
#include "Person.h"

Person* createPersonArray(int n) {
    Person* entity = new Person[n]
    for (int i = 0; i < n; i++){
        entity.name = "John Doe";
        entity.age = 0;
    }
    return entity; 
}
