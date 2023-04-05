#ifndef WizardFiveOFour
#define WizardFiveOFour
#include "player.h"
#include <string>

class Wizard: public Player {
public:
    int mana;
    Wizard(std::string base_name, int base_health, int base_damage, int base_mana);
    void castSpell(Player* opponent);
};
#endif