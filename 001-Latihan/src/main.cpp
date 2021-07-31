#include <iostream>
#include <string>

using namespace std;

int kuadrat(int x){
    int y;
    y = x * x;
    return y;
}
int segitiga(float a, float t){
    float luas;
    luas = 1.2 * a * t;
    return luas;
}

int main(int argc, char const *argv[])
{
    int bilKuadrat;
    bilKuadrat = kuadrat(2);
    cout << "Hasil kuadrat = " << bilKuadrat << endl;
    
    int luasSegitiga;
    luasSegitiga = segitiga(30,15);
    cout << "Hasil L Segitiga = " << luasSegitiga << "cm2" << endl;
    return 0;
}
