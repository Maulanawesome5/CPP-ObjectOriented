#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main()
{
    Mahasiswa data1;
    data1.nama = "maulana";
    data1.NIM = "1714311002";
    data1.jurusan = "informatika";
    data1.IPK = 2.6;
    cout << "Nama Mahasiswa : " << data1.nama << endl;
    cout << "NIM Mahasiswa : " << data1.NIM << endl;
    cout << "Jurusan Mahasiswa : " << data1.jurusan << endl;
    cout << "IPK Mahasiswa : " << data1.IPK << endl;
    cout << "\n";
    Mahasiswa data2;
    data2.nama = "wicaksono";
    data2.NIM = "1714311012";
    data2.jurusan = "ekonomi";
    data2.IPK = 3.1;
    cout << "Nama Mahasiswa : " << data2.nama << endl;
    cout << "NIM Mahasiswa : " << data2.NIM << endl;
    cout << "Jurusan Mahasiswa : " << data2.jurusan << endl;
    cout << "IPK Mahasiswa : " << data2.IPK << endl;
    return 0;
}
