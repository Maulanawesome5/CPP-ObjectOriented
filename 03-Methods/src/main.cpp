#include <iostream>
#include <string>

using namespace std;

// Class dengan constructor
class Mahasiswa{
    public:
        string nama;
        double IPK;

        // Constructor dengan parameter
        Mahasiswa(string inputNama, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::IPK = inputIPK;
        }
};

void printData(Mahasiswa data){
    cout << data.nama << endl;
    cout << data.IPK << endl;
}

int main()
{
    Mahasiswa mahasiswa1 = Mahasiswa("maulana",2.5);
    printData(mahasiswa1);

    return 0;
}
