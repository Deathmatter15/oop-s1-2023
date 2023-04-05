#include <iostream> 
#include "wizard.h"

Wizard::Wizard(std::string base_name, int base_health, int base_damage, int base_mana) : Player(base_name, base_health, base_damage) {
    mana = base_mana;
};

void Wizard::castSpell(Player *opponent){
attack(opponent, mana);
takeDamage(mana);
std::cout << getName() << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
};