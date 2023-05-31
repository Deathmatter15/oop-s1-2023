#ifndef GameEntityTwentyNine
#define GameEntityTwentyNine
#include <tuple>
#include <iostream>

class GameEntity{
private:
std::tuple <int,int> position;
char type;

public:
GameEntity(int x, int y, char type);
std::tuple<int, int> getPos();
char getType();
};
#endif