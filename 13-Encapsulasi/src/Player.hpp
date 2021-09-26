#ifndef __PLAYER
#define __PLAYER

#include <string>
#include "Weapon.hpp"

class Player{
    private:
        std::string name;
        Weapon* weapon; //Encapsulasi

    public:
        Player(const char*); //Constructor
        
        void display(); //Method
        
        void equipWeapon(Weapon*); //Setter untuk implementasi dari konsep encapsulasi
};

#endif