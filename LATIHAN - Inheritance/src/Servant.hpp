#ifndef __SERVANT
#define __SERVANT
#include <iostream>
#include <string>

class Servant{
    public:
        std::string ServantClass;
        
        Servant(std::string servantClass){
            this->ServantClass = servantClass;
        }
};

class Hero{
    private:
        std::string HeroName;
        int HeroLevel;
        float HeroHealth;
        float HealthBase;
        int HeroExp;
        int ExpBase;
    
    public:
        void getName(){std::cout << Hero::HeroName << std::endl;}
        std::string setName(std::string newName){ return newName;}
        void getLevel(){std::cout << Hero::HeroLevel << std::endl;}
        int setLevel(int levelNow){return levelNow;}
        void getHealth(){std::cout << Hero::HeroHealth << std::endl;}
        float setHealth(float healthNow){return healthNow;}
        void getExp(){std::cout << Hero::HeroExp << std::endl;}
        int setExp(int levelNow){return levelNow;}

        Hero(std::string Name, int Level, float Health, int Exp){
            this->HeroName = Name;
            this->HeroLevel = Level;
            this->HeroHealth = Health;
            this->HealthBase = 100;
            this->HeroExp = Exp;
            this->ExpBase = 1000;
        }

        void servantInfo(){
            std::cout << "Servant Class -> " << std::endl;
            std::cout << "Name " << Hero::HeroName;
            std::cout << ", Lv. " << Hero::HeroLevel << std::endl;
            std::cout << "HP:  " << Hero::HeroHealth << "/" << Hero::HealthBase << std::endl;
            std::cout << "EXP: " << Hero::HeroExp << "/" << Hero::ExpBase << std::endl;
        }
};

#endif