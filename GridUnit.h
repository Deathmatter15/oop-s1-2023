#ifndef GridUnitPrac3
#define GridUnitPrac3
#include <iostream>
#include <cstdlib>
#include <tuple>

class GridUnit {
    protected:
    std::tuple<int,int> coordinates; 
    char Entity;

    public:

    GridUnit(int x, int y, char entity){
        coordinates = std::make_tuple(x,y);
        Entity = entity;
    };

    std::tuple<int, int> getCoordinates(){
        return coordinates;
    };

    char getEntity(){
        return Entity;
    };

    void setCoordinates (int x, int y){
        std::get<0>(coordinates) = x;
        std::get<1>(coordinates) = y;
    }

    void setEntity(char entity){
        Entity = entity;
    }

    virtual ~GridUnit(){}; //Dynamic Deconstructor to allow dynamic_cast to properly function;
};

#endif