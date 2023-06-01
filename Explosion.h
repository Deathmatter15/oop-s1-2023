#ifndef ExplosionThirtyOneFive
#define ExplosionThirtyOneFive
#include "GameEntity.h"
#include "Effect.h"
class Explosion: public GameEntity, public Effect{
    private:
        
    public:
        
        Explosion(int x, int y): GameEntity(x, y, 'E'){};

        void apply(){
            position = std::make_tuple(-1,-1);
            type = 'X';
        };

};
#endif