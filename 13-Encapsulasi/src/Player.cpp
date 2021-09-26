#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    std::cout << "Player name : " << this->name << std::endl;
    // this->weapon->display();
    std::cout << "Equipped weapon -> " << this->weapon->getName();
}

//Setter untuk implementasi dari konsep encapsulasi
void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}