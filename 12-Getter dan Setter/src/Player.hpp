#ifndef __PLAYER
#define __PLAYER

#include <string>

class Player{
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;
    
    public:
        Player(const char* name);

        //Getter, membuat attribute menjadi read only
        std::string getName();

        //Setter, melakukan write data kedalam class
        void setName(const char* name);

        void addExperience(int expValue);

        void display();
};


#endif