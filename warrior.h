#ifndef WarriorOFiveFour
#define WarrioeOFiveFour
#include "player.h"
#include <string>

class Warrior: public Player {
public:
    std::string weapon;
    Warrior(std::string base_name, int base_health, int base_damage, std::string base_weapon);
    void swingWeapon(Player* opponent);
};
#endif