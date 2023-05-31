#ifndef UtilThirtyFive
#define UtilThirtyFive
#include <iostream>
#include <tuple>
#include <cstdlib>
#include <cmath>

class Utils {
    private:

    public:
    std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
    int x = rand() % (gridWidth + 1);
    int y = rand() % (gridHeight + 1);
    std::tuple<int, int> new_pos(x, y);
    return new_pos;
    };
    double Utils::calculateDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2){
    int distance_squared = pow(std::get<0>(pos1)+std::get<0>(pos2), 2) + pow(std::get<1>(pos1) + std::get<1>(pos2), 2);
    return pow(distance_squared, 0.5);
    };
};
#endif