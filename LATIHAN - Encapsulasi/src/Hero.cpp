#include "Hero.hpp"
#include <iostream>
#include <string>

Hero::Hero(const char *name, double health, double exp){
    this->nameHero = name;
    this->health = health;
    this->exp = exp;

    this->healthBase = 100;
    this->expBase = 1000;
}

Hero::~Hero(){
    // Destructor
}

void Hero::display(){
    std::cout << "My name is " << this->nameHero << std::endl;
    std::cout << "HP  : " << this->health << "/" << this->healthBase << std::endl;
    std::cout << "EXP : " << this->exp << "/" << this->expBase << std::endl;
    std::cout << std::endl;
}

void Hero::getName(){
    std::cout << "My name is " << this->nameHero;
    std::cout << ", I'am your servant" << std::endl << std::endl;
}

std::string Hero::getNameHero(){
    return this->nameHero;
}

double Hero::getHealth(){
    return this->health;
}

double Hero::getExperience(){
    return this->exp;
}

std::string Hero::setName(const char *newName){
    this->nameHero = newName;
    std::cout << "Character change to " << newName << std::endl;
    return newName;
}

double Hero::healthDecrease(double HPStatus){
    double maxHP = this->health;
    float enemyDamage = this->weaponDamage;
    while (true){
        maxHP - enemyDamage;
    }
    
    
}

void Hero::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}

void Hero::equipArmor(Armor* armor){
    this->armor = armor;
}

void Hero::battleInfo(){
    std::cout << this->nameHero << std::endl;
    std::cout << "HP  : " << this->health << "/" << this->healthBase << std::endl;
    std::cout << "EXP : " << this->exp << "/" << this->expBase << std::endl;
    weapon->weaponInfo();
    armor->armorInfo();
    std::cout << std::endl;
}

std::string Hero::enemy(const char* enemyName){
    this->nameHero = enemyName;
    return enemyName;
}

void Hero::setStrike(Hero* enemyName){
    enemyName = this->enemy();
    std::cout << this->getNameHero() << " menyerang ";
}
