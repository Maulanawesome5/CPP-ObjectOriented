#include <iostream>
#include <string>

#include "Player.hpp"
#include "Weapon.hpp"

using namespace std;

int main(int argc, char const *argv[]){

    Player* player1 = new Player("Saber");
    Weapon* weapon1 = new Weapon("Excalibur", 100);

    //Implementasi setter untuk equip weapon
    player1->equipWeapon(weapon1);
    
    //Menggunakan arrow operator karena instance object menggunakan pointer
    player1->display();
    // weapon1->display();


    return 0;
}

/*
    Kesimpulan:
    Encapsulasi adalah penyatuan dua class yang berbeda, sehingga bisa saling
    berinteraksi antar class.
    Contohnya class Weapon yang di-include kedalam class Player.
    Sehingga kedua class ini bisa menggunakan method yang berasal dari masing-masing class.
*/