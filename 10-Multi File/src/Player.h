#ifndef __PLAYER
#define __PLAYER

#include <string>


/*=========================================================
    Deklarasi Class, Prototype constructor dan methods class
=========================================================*/
class Player{
    public:
        std::string name;

        //Constructor
        Player(const char* name); //Prototype class constructor

        //Methods
        void display(); //Prototype class methods
        std::string getName();
        void setName(const char* name);
};

#endif