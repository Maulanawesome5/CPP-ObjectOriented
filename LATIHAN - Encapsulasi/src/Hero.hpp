#ifndef __HERO
#define __HERO

#include <string>
#include "Weapon.hpp"
#include "Armor.hpp"

class Hero{
    private:
        std::string nameHero;
        double health;
        double healthBase;
        double exp;
        double expBase;
        Weapon* weapon;
        Armor* armor;

    public:
        Hero(const char*, double, double);

        ~Hero();

        void display();

        void getName();

        double getHealth();

        double getExperience();

        std::string setName(const char*);

        void equipWeapon(Weapon*);

        void equipArmor(Armor*);

        void battleInfo();
};

#endif