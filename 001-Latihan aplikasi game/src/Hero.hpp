#ifndef __HERO
#define __HERO

#include <iostream>
#include <string>

class Hero{
    public:
        std::string namaHero;

    private:
        std::string typeHero;
        int lifeHero;
        int manaHero;
        int attackPower;
        int armorHero;
        
    public:
        //Constructor
        Hero(const char* typeHero, std::string namaHero, int health, int mana, int attackPower, int armor){
            Hero::typeHero = typeHero; //Pakai namespace dari class
            Hero::namaHero = namaHero;
            Hero::lifeHero = health; 
            this->manaHero = mana; //Pakai arrow operator
            this->attackPower = attackPower;
            this->armorHero = armor;
        }

        //Destructor
        ~Hero(){
            
        }
        
        //Class method tanpa parameter dan tanpa return
        void displayHero(){
            std::cout << "Hero Class   " << typeHero << std::endl;
            std::cout << "Hero Name    " << namaHero << std::endl;
            std::cout << "Hero Health  " << lifeHero << std::endl;
            std::cout << "Hero Mana    " << manaHero << std::endl;
            std::cout << "Attack Power " << attackPower << std::endl;
            std::cout << "Hero Armor   " << armorHero << std::endl;
            std::cout << std::endl;
        }

        //Class method dengan parameter tanpa return
        void ubahNama(const char* namaBaru){
            std::cout << "** Karakter Hero telah diubah" << std::endl;
            Hero::namaHero = namaBaru;
        }

        void ubahClassHero(const char* classBaru){
            std::cout << "** Class dari hero telah diubah" << std::endl;
            Hero::typeHero = classBaru;
        }

        void getHealth(int healthPoint){
            healthPoint = this->lifeHero;
            std::cout << "Jumlah Health Point = " << healthPoint << std::endl;
        }

};

#endif