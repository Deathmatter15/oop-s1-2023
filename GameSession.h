#ifndef WeGamingToday
#define WeGamingToday
#include "GridUnit.h"
#include "Modifier.h"
#include "Helper.h"
#include "Obstacle.h"
#include "Avatar.h"
#include <vector>
    class GameSession {
        private:
            std::vector<GridUnit*> grid;
            int numAvatar;
            int numObstacle;
            int gridWidthSet;
        public:
            std::vector<GridUnit*>& getGrid(){
                return grid;
            };

            void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){
                for(int i=0; i<numAvatars; i++){
                    std::tuple<int,int> randomCoordinate = Helper::generateRandomCoordinates(gridWidth,gridHeight);
                    grid.push_back(new Avatar(std::get<0>(randomCoordinate), std::get<1>(randomCoordinate)) );
                }

                for(int i=0; i<numObstacles; i++){
                    std::tuple<int,int> randomCoordinate = Helper::generateRandomCoordinates(gridWidth,gridHeight);
                    grid.push_back( new Obstacle(std::get<0>(randomCoordinate), std::get<1>(randomCoordinate)) );
                }

                numAvatar = numAvatars;
                numObstacle = numObstacles;
                gridWidthSet = gridWidth;
            };

            void gameCycle(int maxCycles, double obstacleActivationDistance){
                for (int i=0; i<maxCycles; i++){
                    for (int i = 0; i< numAvatar; i++){
                        Avatar* avatarPtr = dynamic_cast<Avatar*>(grid.at(i));
                        if(avatarPtr){
                        avatarPtr->shift(1,0);
                        }
                        std::tuple<int,int> pos1 = grid.at(i)->getCoordinates();
                        for (int j = numAvatar; j<numAvatar+numObstacle-2; j++){
                            std::tuple<int,int> pos2 = grid.at(j)->getCoordinates();
                        if(Helper::calculateDistance(pos1, pos2) <= obstacleActivationDistance){
                        Obstacle* obstaclePtr = dynamic_cast<Obstacle*>(grid.at(j));
                            if(obstaclePtr){
                                obstaclePtr->apply(grid.at(i));
                                }
                            
                        }
                        }
                    }

                    for(int i=0; i<numAvatar; i++) {
                        std::tuple<int,int> positionsAvatar = grid.at(i)->getCoordinates();
                        if (std::get<0>(positionsAvatar) > gridWidthSet) {
                            std::cout << "Avatar has won The Game" << std::endl;
                            return;
                        }else {
                            std::cout << "No Avatar has won The Game" << std::endl;
                            return;
                        }
                    }
                    
                }
                return;
            }
    };
#endif