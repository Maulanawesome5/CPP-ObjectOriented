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
        Weapon* weaponDamage;
        Armor* armor;
        Hero* enemyName;

    public:
        Hero(const char*, double, double);

        ~Hero();

        void display();

        void getName();

        std::string getNameHero();

        double getHealth();

        double getExperience();

        std::string setName(const char*);

        double healthDecrease();

        void equipWeapon(Weapon*);

        void equipArmor(Armor*);

        void battleInfo();

        std::string enemy(const char*);

        void setStrike(Hero*);
};

#endif