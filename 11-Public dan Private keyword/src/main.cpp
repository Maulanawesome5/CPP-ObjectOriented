#include <iostream>
#include <string>

#include "Mahasiswa.hpp"

using namespace std;

int main(int argc, char const *argv[]){
   Mahasiswa* mahasiswa1 = new Mahasiswa("Ucup");
   cout << mahasiswa1->namePublic << endl;

    return 0;
}
