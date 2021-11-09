#include <iostream>
#include <string>

//Include external header file
#include "Hero.hpp"

using namespace std;

int main(int argc, char const *argv[]){
    /* ================ Default Hero data ================ */
    Hero hero1 = Hero("'Saber'", "Arthuria", 100, 80, 70, 90);
    Hero hero2 = Hero("'Archer'", "Gilgamesh", 100, 80, 70, 90);
    Hero hero3 = Hero("'Lancer'", "Diarmuid", 100, 80, 70, 90);
    Hero hero4 = Hero("'Caster'", "Medea", 100, 150, 65, 100);
    Hero hero5 = Hero("'Berserker'", "Heracles", 150, 50, 75, 100);
    Hero hero6 = Hero("'Rider'", "Medusa", 100, 70, 65, 80);
    Hero hero7 = Hero("'Assasin'", "Hassan Sabbah", 100, 70, 65, 80);

    /* ================ Display Hero data ================ */
    hero1.displayHero();
    // hero2.displayHero();
    // hero3.displayHero();
    // hero4.displayHero();
    // hero5.displayHero();
    // hero6.displayHero();
    // hero7.displayHero();

    /* ================ Method Class Hero ================ */
    // hero1.ubahNama("Siegfried"); // Method untuk mengubah karakter hero
    // hero1.ubahClassHero("Rider"); // Method untuk mengubah tipe class hero
    // hero1.setAttack(hero2);
    hero1.getHealth(10);
    hero1.displayHero();

    return 0;
}
