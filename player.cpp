#ifndef PlayerOFive 
#define PlayerOFive
#include <string>
    class Player {
        private: 

        std::string name; 
        int health; 
        int damage; 

        public:
        void setName(std::string input_name);
        std::string getName();

        void setHealth(int input_health);
        int getHealth();

        void setDamage(int input_damage);
        int getDamage();

        Player(std::string base_name, int base_health, int base_damage);
        
        void attack(Player* opponent, int damage_output);

        void takeDamage(int damage_taken);
    };

#endif