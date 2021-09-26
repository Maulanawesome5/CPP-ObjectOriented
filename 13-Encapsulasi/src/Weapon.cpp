#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(const char* name, double damage){
    this->name = name;
    this->damage = damage;
}

void Weapon::display(){
    std::cout << "Weapon : " << this->name << ", Damage : " << this->damage << std::endl;
}

std::string Weapon::getName(){
    return this->name;
}
