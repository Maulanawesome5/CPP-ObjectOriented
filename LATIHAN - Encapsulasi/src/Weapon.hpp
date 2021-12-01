#ifndef __WEAPON
#define __WEAPON

#include <string>
#include <iostream>

class Weapon{
    private:
        std::string nameWeapon;
        float damage;
        float mana;
    
    public:
        Weapon(const char* name, float damage, float mana){
            this->nameWeapon = name;
            this->damage = damage;
            this->mana = mana;
        }

        ~Weapon(){
            // Destructor
        }

        void weaponInfo(){
            std::cout << "Equipped Weapon -> " << this->nameWeapon << std::endl;
            std::cout << "DP : " << this->damage;
            std::cout << "\tMP : " << this->mana << std::endl;
        }

        std::string weaponName(){
            return this->nameWeapon;
        }

        float getDamage(){
            return this->damage;
        }

        float getMana(){
            return this->mana;
        }
};

#endif