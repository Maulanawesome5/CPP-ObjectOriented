#include <iostream>
#include <string>

#include "Player.hpp"
    
Player::Player(const char* name){
    this->name = name;
    this->attackPower = 100;
    this->level = 1;
    this->exp = 0;
}

//Getter, membuat attribute menjadi read only
std::string Player::getName(){
    return this->name;
}

//Setter, melakukan write data kedalam class
void Player::setName(const char* name){
    this->name = name;
}

void Player::addExperience(int expValue){
    int maxExp = 100;
    this->exp += expValue;
    std::cout << "Experience increase --> " << this->exp << std::endl;
    if(this->exp >= maxExp){
        this->level++;
        this->attackPower += 100;
        std::cout << "LEVEL UP !" << std::endl;
    }
}

void Player::display(){
    std::cout << "Player Name : " << this->name << std::endl;
    std::cout << "Player Level: " << this->level << "\t ,Exp : " << this->exp << std::endl;
    std::cout << "Attack Power: " << this->attackPower << std::endl;
    std::cout << std::endl;
}