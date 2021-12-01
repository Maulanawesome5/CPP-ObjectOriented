#include <iostream>
#include <string>
#include "Hero.hpp"
#include "Weapon.hpp"
#include "Armor.hpp"
#include "Master.hpp"

using namespace std;

Hero* hero1 = new Hero("Saber", 100, 0);
Hero* hero2 = new Hero("Archer", 100, 0);
Hero* hero3 = new Hero("Lancer", 100, 0);

Weapon* sword1 = new Weapon("Excalibur", 5.5, 100);
Weapon* sword2 = new Weapon("Arondight", 5.5, 100);
Weapon* sword3 = new Weapon("Balmug", 5.5, 100);
Weapon* bow1 = new Weapon("Crossbow", 5.5, 100);
Weapon* bow2 = new Weapon("Agni Gandiva", 5.5, 100);
Weapon* bow3 = new Weapon("Antares Snipe", 5.5, 100);
Weapon* spear1 = new Weapon("Gae Bolg", 5.5, 100);
Weapon* spear2 = new Weapon("Gae Buidhe", 5.5, 100);
Weapon* spear3 = new Weapon("Gae Dearg", 5.5, 100);
Weapon* spear4 = new Weapon("Vasavi Shakti", 5.5, 100);

Armor* armor1 = new Armor("Medieval Cloth", 2.5, 5.0);
Armor* armor2 = new Armor("Chainmail", 2.6, 3);
Armor* armor3 = new Armor("Bullet Vest", 2.5, 3);

Master* master1 = new Master("Tohsaka", 100, 100);
Master* master2 = new Master("Einzbern", 100, 100);
Master* master3 = new Master("Makiri", 100, 100);

int main(int argc, char const *argv[]){
    
    // hero1->display();
    // hero2->display();
    // hero3->display();
    // master1->masterInfo();

    hero1->equipWeapon(sword1);
    hero1->equipArmor(armor2);
    hero1->battleInfo();

    hero2->equipWeapon(bow1);
    hero2->equipArmor(armor3);
    hero2->battleInfo();

    hero1->enemy(hero2);
    hero1->setStrike(hero2);


    return 0;
}
