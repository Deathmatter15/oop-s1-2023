#include <iostream> 
#include <iostream> 
#include "player.h"

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
    std::cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
};