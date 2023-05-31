#ifndef EffectThirtyFive
#define EffectThirtyFive
#include <iostream>
#include <tuple>

class Effect {
    private: 
    public:
    virtual void apply(GameEntity& entity);
};

#endif