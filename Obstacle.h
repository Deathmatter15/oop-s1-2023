#ifndef ObstaclePrac4
#define ObstaclePrac4
#include "GridUnit.h"
#include "Modifier.h"

class Obstacle: public GridUnit, public Modifier{
    private:
    
    
    public:
    Obstacle(int x, int y): GridUnit(x, y,'O'){};
    
    bool active = true;
    
    bool isActive(){
        if (active){
            return true;
        };
        return false;
    }

    void apply()
};

#endif