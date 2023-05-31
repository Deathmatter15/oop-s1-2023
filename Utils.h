#ifndef UtilThirtyFive
#define UtilThirtyFive
#include <iostream>
#include <tuple>
#include <random>
#include <cmath>

class Utils {
    private:

    public:
    std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
    double calculatorDistance(std::tuple<int,int> pos1, std::tuple<int,int> pos2);
};
#endif