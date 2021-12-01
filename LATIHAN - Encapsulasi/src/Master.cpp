#include "Master.hpp"

#include <string>
#include <iostream>

Master::Master(const char* masterName, double masterHP, double masterMP){
    this->masterName = masterName;
    this->masterHP = masterHP;
    this->masterMP = masterMP;
    this->healthBase = 100;
    this->manaBase = 100;
}

Master::~Master(){
    /* Destructor */
}

void Master::masterInfo(){
    std::cout << "Master " << this->masterName << std::endl;
    std::cout << "HP : " << this->masterHP << "/" << this->healthBase;
    std::cout << ", MP : " << this->masterMP << "/" << this->manaBase << std::endl;
}