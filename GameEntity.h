#ifndef GameEntityTwentyNine
#define GameEntityTwentyNine
#include <tuple>
#include <iostream>

class GameEntity{
protected:
std::tuple <int,int> position;
char type;

public:
GameEntity(int x, int y, char input_type){
    position = std::make_tuple(x, y);
    type = input_type;
};

std::tuple<int, int> getPos(){
    return position;
};

char getType(){
    return type;
};

};
#endif