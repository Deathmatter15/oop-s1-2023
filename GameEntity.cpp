#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char input_type){
    position = make_tuple(x, y);
    type = input_type;
}

std::tuple<int, int> GameEntity::getPos(){
    return position;
}

char GameEntity::getType(){
    return type;
}