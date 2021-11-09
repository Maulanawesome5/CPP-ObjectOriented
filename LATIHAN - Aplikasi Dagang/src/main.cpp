#include <iostream>
#include <string>

#include "class_barang.hpp"

using namespace std;

int main(int argc, char const *argv[])
{ 
    /*================================================================
 	    Header aplikasi barang dagangan
    ==================================================================*/
	system("cls");
	cout << "===== Aplikasi toko barang =====" << endl;
	cout << "=== Daftar Barang ===" << endl;
    
    /*================================================================
 	    Object class barang
    ==================================================================*/
	Barang sabun = Barang("Sabun", 20, 5000);
	Barang shampo = Barang("Shampo", 40, 2000);
	Barang pastaGigi = Barang("Pasta Gigi", 20, 7500);
	Barang sabunPiring = Barang("Sabun Cuci Piring", 10, 3500);
	Barang deterjen = Barang("Deterjen Baju", 12, 7500);
	Barang porselain = Barang("Porcelen Toilet", 2, 22500);
	Barang sikatGigi = Barang("Sikat Gigi", 15, 5600);
	Barang mieInstan = Barang("Mie Instan", 30, 3200);
	Barang parfumRuangan = Barang("Parfum Ruangan", 2, 10000);
	Barang sarden = Barang("Sarden Kaleng", 5, 15000);
	Barang tehCelup = Barang("Teh Celup", 25, 3000);
	Barang kecapBotol = Barang("Kecap Botol", 10, 5000);
	Barang saosBotol = Barang("Saos Botol", 10, 5000);
	Barang handbody = Barang("Handbody Sachet", 10, 5000);
	Barang kondisioner = Barang("Kondisioner Sachet", 10, 1000);

    /*================================================================
 	    Method aplikasi barang dagangan
	sabun.daftarBarang(); //Method menampilkan object 
    shampo.daftarBarang();
	pastaGigi.daftarBarang();
	sabunPiring.daftarBarang();
	deterjen.daftarBarang();
	porselain.daftarBarang();
    sikatGigi.daftarBarang();
    mieInstan.daftarBarang();
    parfumRuangan.daftarBarang();
    sarden.daftarBarang();
    tehCelup.daftarBarang();
    ==================================================================*/
    kecapBotol.daftarBarang();
    saosBotol.daftarBarang();
    handbody.daftarBarang();
    kondisioner.daftarBarang();

	// porselain.tambahStok(2); // Method menambahkan stok barang
	// deterjen.beliBarang(2); // Method membeli barang, stok berkurang
	// deterjen.sisaStok(); // Method mengecek jumlah stok setelah dibeli


	return 0;
}