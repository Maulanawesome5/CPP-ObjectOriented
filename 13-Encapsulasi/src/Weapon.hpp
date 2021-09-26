#ifndef __WEAPON
#define __WEAPON

#include <string>

class Weapon{
    private:
        std::string name;
        double damage;
    
    public:
        Weapon(const char*, double); //Constructor
        
        void display(); //Method

        std::string getName(); //Getter
};

#endif