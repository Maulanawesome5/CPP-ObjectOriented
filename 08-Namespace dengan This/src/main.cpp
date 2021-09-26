#include <iostream>
#include <string>

using namespace std;

class tipeClass{
    public:
        string dataStr;
        double dataDouble;
        double m_dataDouble; //Huruf m_ untuk menyatakan bahwa variabel tersebut adalah member dari class

        tipeClass(const char* dataStr, double dataDouble){
            tipeClass::dataStr = dataStr; // Menggunakan namespace class
            cout << this << endl; // Menggunakan keyword 'this'
            cout << this->dataStr << endl;
            this->dataDouble = dataDouble;

            // Dengan menggunakan konvensi penamaan
            m_dataDouble = dataDouble;
        }
};

class Player{
    public:
        string nama;
        double power;
        int health;

        Player(const char* name, double power){
            Player::setName(name);
            this->setPower(power);
        }
        void setName(const char* name){
            this->nama = name;
        }
        void setPower(double power){
            this->power = power;
        }
        void setHealth(int);
};

void Player::setHealth(int health){
    Player::health = health;
}

int main(int argc, char const *argv[])
{
   tipeClass* object1 = new tipeClass("Object 1", 0.05);
   cout << object1->dataStr<< endl;
   cout << object1->dataDouble << endl;
   cout << object1->m_dataDouble<< endl;

   Player* player1 = new Player("saber", 200);
   cout << player1->nama << endl;
   player1->setHealth(10);
   cout << player1->health << endl;

    return 0;
}
