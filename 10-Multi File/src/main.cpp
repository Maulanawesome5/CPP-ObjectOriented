#include <iostream>
#include <string>

// Eksternal file definition
#include "Player.h"

using namespace std;

int main(int argc, char const *argv[]){
   Player* player1 = new Player("Archer");
   player1->display();
   cout << "Get Name : " << player1->getName() << endl;
   player1->setName("Berserker");
   cout << "Set Name -> ";
   player1->display();

    return 0;
}
