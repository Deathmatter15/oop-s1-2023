#include <iostream> 
#include "player.h"
#include "warrior.h"
#include "wizard.h"

void Player::setName(std::string input_name){
    name = input_name;  
};

std::string Player::getName(){
    return name;
};

void Player::setHealth(int input_health){
    health = input_health;
};
int Player::getHealth() {
    return health; 
};

void Player::setDamage(int input_damage){
    damage = input_damage;
};
int Player::getDamage(){
    return damage;
};

Player::Player(std::string base_name, int base_health, int base_damage){
    setName(base_name);
    setHealth(base_health);
    setDamage(base_damage);
};
        
void Player::attack(Player *opponent, int damage_output){
    int current_health = opponent->getHealth() - damage_output;
    opponent->setHealth(current_health);
};

void Player::takeDamage(int damage_taken){
    int current_health = getHealth() - damage_taken;
    setHealth(current_health);
};

Wizard::Wizard(std::string base_name, int base_health, int base_damage, int base_mana) : Player(base_name, base_health, base_damage) {
    mana = base_mana;
};

Warrior::Warrior(std::string base_name, int base_health, int base_damage, std::string base_weapon) : Player(base_name, base_health, base_damage) {
    weapon = base_weapon;
};

void Wizard::castSpell(Player *opponent){
attack(opponent, mana);
};


void Warrior::swingWeapon(Player *opponent){
attack (opponent, getDamage());
};