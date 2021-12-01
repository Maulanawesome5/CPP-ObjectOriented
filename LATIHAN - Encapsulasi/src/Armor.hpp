#ifndef __ARMOR
#define __ARMOR

#include <iostream>
#include <string>

class Armor{
    private:
        std::string armorName;
        float armorPoint;
        float armorAbility;
    
    public:
        Armor(const char* armorName, float armorPoint, float armorAbility){
            this->armorName = armorName;
            this->armorPoint = armorPoint;
            this->armorAbility = armorAbility;
        }
        
        ~Armor(){
            // Destructor
        }

        void armorInfo(){
            std::cout << "Equipped Armor -> " << this->armorName << std::endl;
            std::cout << "PP : " << this->armorPoint;
            std::cout << "\tAbility : " << this->armorAbility << std::endl;
        }

        std::string getName(){
            return this->armorName;
        }

        float valueArmor(){
            return this->armorPoint;
        }

        float valueAbility(){
            return this->armorAbility;
        }

};


#endif