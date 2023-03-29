#include <iostream>
#include "Musician.h"

int main() {
    Musician m1("violin", 5);
    Musician m2("viola", 3);
    Musician m3("cello", 7);
    Musician m4("double bass", 2);
    Musician m5("flute", 4);
    Musician m6("trumpet", 6);

    std::cout << "Default instrument: " << m1.get_instrument() << ", Default experience: " << m1.get_experience() << std::endl;

    std::cout << "Instrument: " << m2.get_instrument() << ", Experience: " << m2.get_experience() << std::endl;

    

    return 0;
}