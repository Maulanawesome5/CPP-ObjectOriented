#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string name;

        //Constructor
        Player(const char* name); //Prototype class constructor

        //Methods
        void display(); //Prototype class methods
        string getName();
        void setName(const char* name);
};

int main(int argc, char const *argv[]){
   Player* player1 = new Player("Saber");
   player1->display();
   cout << "Get Name : " << player1->getName() << endl;
   player1->setName("Archer");
   cout << "Set Name -> ";
   player1->display();

    return 0;
}

/*=========================================================
    Deklarasi Prototype constructor dan methods class
=========================================================*/
Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama Player : " << this->name << endl;
}

string Player::getName(){
    return this->name;
}

void Player::setName(const char* name){
    this->name = name;
}