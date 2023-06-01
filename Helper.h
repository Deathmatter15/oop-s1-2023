#ifndef HelperPrac4
#define HelperPrac4
#include <iostream>
#include <cstdlib>
#include <tuple>
#include <cmath>
class Helper {
    public:
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight){
        int xCoordinate = rand()%(gridWidth+1);
        int yCoordinate = rand()%(gridHeight+1);
        if(xCoordinate ==1){xCoordinate = 0;}
        return std::make_tuple(xCoordinate, yCoordinate);
    };

    static double calculateDistance(std::tuple<int,int> coord1, std::tuple<int,int> coord2){
        double xDist = pow(std::get<0>(coord1) - std::get<0>(coord2),2);
        double yDist = pow(std::get<1>(coord1) - std::get<1>(coord2),2);
        double eDist = pow(xDist + yDist, 0.5);
        return eDist;
    };
};
#endif