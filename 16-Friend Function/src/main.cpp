#include <iostream>
#include <string>

using namespace std;

class IntelHero; // Prototype

class StrengthHero{
    private:
        string Name;
        double Health;
    
    public:
        StrengthHero(const char* name){
            this->Name = name;
            this->Health = 100;
        }

        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2);
};

class IntelHero{
    private:
        string Name;
        double Health;
    
    public:
        IntelHero(const char* name){
            this->Name = name;
            this->Health = 200;
        }
        friend bool compare(const StrengthHero& hero1, const IntelHero& hero2);
        
        friend bool compare(const IntelHero& hero1, const StrengthHero& hero2){
            cout << "Fungsi compare class scope" << endl;
            return hero1.Health > hero2.Health;
        }
};

bool compare(const StrengthHero& hero1, const IntelHero& hero2){
    cout << "Fungsi compare global scope" << endl;
    return hero1.Health > hero2.Health;
}

int main(int argc, char const *argv[]){
    
    StrengthHero hero1 = StrengthHero("Diarmuid");
    IntelHero hero2 = IntelHero("Julius Caesar");

    cout << compare(hero1, hero2) << endl;
    cout << compare(hero2, hero1) << endl;


    return 0;
}

/* Friend -> keyword c++ yang akan membuat function bisa 
mengakses member public atau non-public */