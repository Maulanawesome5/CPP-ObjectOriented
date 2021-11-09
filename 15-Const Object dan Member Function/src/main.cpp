#include <iostream>
#include <string>

using namespace std;

class Hero{
    public:
        string name;
        
        Hero(const char* name){
            this->name = name;
        }

        void display() const {
            /* 
                Harus ditambahkan keyword const agar bisa
                menampilkan object/instance yang dibuat const (hero2)
            */
            cout << "Name = " << this->name << endl;
        }
};

int main(int argc, char const *argv[])
{
    Hero hero1 = Hero("Saber");
    const Hero hero2 = Hero("Lancer");
    
    hero1.display();
    hero1.name = "Archer"; // Mengganti nama saber menjadi archer
    hero1.display();

    /* 
        Tidak bisa ditampilkan karena hero2 dibuat const
        Jika ingin ditampilkan, maka method display harus diberi
        const juga. 
    */
    hero2.display();
    // hero2.name = "Rider";


    return 0;
}
