#include <iostream> 
#include "warrior.h"
Warrior::Warrior(std::string base_name, int base_health, int base_damage, std::string base_weapon) : Player(base_name, base_health, base_damage) {
    weapon = base_weapon;
};

void Warrior::swingWeapon(Player *opponent){
attack (opponent, getDamage());
takeDamage(getDamage());
std::cout << getName() << " swings their " << weapon << " at " << opponent->getName() << "!\n";
};