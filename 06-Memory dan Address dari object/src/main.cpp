#include <iostream>
#include <string>
#include <chrono>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong{
    public:
        // Tanpa memiliki class variabel
        // Hanya diberi fungsi biasa
        int data(){
            return 1;
        }
};

class Hero{
    public:
        string classHero; //Ukuran tipedata string 32 byte
        int healthPoint; //Ukuran tipedata integer 4 byte
        int manaPoint; //Ukuran tipedata integer 4 byte
        double expPoint; //Ukuran tipedata double 8 byte

        Hero(const char* classHero, int HP, int MP, double EXP){
            Hero::classHero = classHero;
            Hero::healthPoint = HP;
            Hero::manaPoint = MP;
            Hero::expPoint = EXP;
        }
};

int main(int argc, char const *argv[])
{
    //Menampilkan besar alokasi memory pada class
    cout << "Alokasi memory class Kosong : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi memory class Hero   : " << sizeof(Hero) << " byte" << endl;

    //=========== Address ===========
    string a;
    string b;
    Hero saber = Hero("Saber", 100, 90, 0);
    Hero* lancer = new Hero("Lancer", 100, 90, 0);
    Hero archer = Hero("Archer", 100, 90, 0);
    Hero* berserker = new Hero("Berserker", 200, 50, 0);
    
    cout << "\nAddress memory" << endl;
    cout << "Pada stack memory, dengan address : " << &a<< endl;
    cout << "Pada stack memory, dengan address : " << &b<< endl;
    cout << "Pada stack memory, dengan address : " << &saber<< endl;
    cout << "Pada stack memory, dengan address : " << &lancer<< endl;
    cout << "Pada heap memory, dengan address : " << lancer<< endl;
    cout << "Pada stack memory, dengan address : " << &archer<< endl;
    cout << "Pada stack memory, dengan address : " << &berserker<< endl;
    cout << "Pada heap memory, dengan address : " << berserker<< endl << endl;

    //Menguji seberapa cepat object dibuat pada masing-masing memory
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    cin.get();
    *tStackStart = Clock::now();
    Hero assasin = Hero("Assasin", 100, 60, 0);
    *tStackEnd = Clock::now();
    
    cin.get();
    *tHeapStart = Clock::now();
    Hero* rider = new Hero("Rider", 100, 65, 0);
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object di stack " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Waktu pembuatan object di heap  " << durasi.count() << endl;

    return 0;
}
