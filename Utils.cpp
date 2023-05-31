#include "Utils.h"
std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
std::random_device slot;
std::mt19937 rng(slot());
std::uniform_int_distribution<std::mt19937::result_type> grid_x(0, gridWidth);
std::uniform_int_distribution<std::mt19937::result_type> grid_y(0, gridHeight);
int x = grid_x(rng);
int y = grid_y(rng);
std::tuple<int, int> new_pos(x, y);
return new_pos;
}

double calculatorDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2){
    int distance_squared = pow(std::get<0>(pos1)+std::get<0>(pos2), 2) + pow(std::get<1>(pos1) + std::get<1>(pos2), 2);
    return pow(distance_squared, 0.5);
};