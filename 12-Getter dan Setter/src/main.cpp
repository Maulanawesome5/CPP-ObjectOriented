#include <iostream>
#include <string>

#include "Player.hpp"

using namespace std;

int main(int argc, char const *argv[]){

    Player player1 = Player("Saber");
    player1.display();

    cout << player1.getName() << endl; //Getter read only
    player1.addExperience(25); //Setter, write kedalam class
    player1.display();
    player1.addExperience(65);
    player1.display();
    player1.addExperience(10);
    player1.display();
    
    return 0;
}
