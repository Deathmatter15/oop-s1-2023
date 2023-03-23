#ifndef personMarchTwenty3
#define personMarchTwenty3
    #include <string>
    
    struct Person {
    std::string name;
    int age;
    };

    struct PersonList {
    Person* people;
    int numPeople;
    };
    
#endif