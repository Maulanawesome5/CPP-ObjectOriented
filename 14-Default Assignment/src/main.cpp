#include <iostream>
#include <string>

using namespace std;

class Hero{
    private:
        string name;
        double health;
    
    public:
        Hero(const char* name = "'Hero'", double health = 100){
            this->name = name;
            this->health = health;
        }

        ~Hero(){
            //Destructor
        }

        void display(){
            cout << "Player name  : " << this->name << endl;
            cout << "Health Point : " << this->health << endl;
            cout << endl;
        }
};

int main(int argc, char const *argv[])
{
    Hero* hero1 = new Hero("Saber", 200); // Assignment pada instance
    hero1->display();

    Hero* hero2 = new Hero(); // assignment default pada class
    hero2->display();

    Hero* hero3 = new Hero("Lancer"); //Assignment default pada class (satu parameter)
    hero3->display();
    
    return 0;
}
