#include <iostream>
#include <string>
using namespace std;

/*
 // Class tanpa constructor
class Polos{
    public:
        string dataString;
        int dataInteger;
}; 
*/

// Class dengan constructor
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string prodi;
        double IPK;
        /*
        // Ini bagian constructor
        Mahasiswa(){
            cout << "Ini adalah constructor" << endl;
        }
        */
        // Constructor dengan parameter
        Mahasiswa(string inputNama, string inputNIM, string inputProdi, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::prodi = inputProdi;
            Mahasiswa::IPK = inputIPK;
            
            cout << Mahasiswa::nama << endl;
            cout << Mahasiswa::NIM << endl;
            cout << Mahasiswa::prodi << endl;
            cout << Mahasiswa::IPK << endl;
        }
};

int main()
{
/*
    Polos objectPolos;
    objectPolos.dataString = "Polos";
    objectPolos.dataInteger = 0;
    cout << objectPolos.dataString << endl;
    cout << objectPolos.dataInteger << endl;
*/

    Mahasiswa mahasiswa1 = Mahasiswa("maulana", "1714311002", "informatika", 3.2);
    Mahasiswa mahasiswa2 = Mahasiswa("wicaksono", "1714311012", "ilmu komputer", 3.1);

    return 0;
}
