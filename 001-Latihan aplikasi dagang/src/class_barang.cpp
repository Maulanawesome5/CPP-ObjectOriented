#include <iostream>
#include <string>
#include "class_barang.hpp"

//Constructor
Barang::Barang(char const* namaBarang, int stokBarang, double hargaBarang){
	Barang::namaBarang = namaBarang;
	Barang::stokBarang = stokBarang;
	Barang::hargaBarang = hargaBarang;
}

//Destructor
Barang::~Barang(){

}

//Class method
void Barang::daftarBarang(){
    std::cout << "Nama Barang  : " << Barang::namaBarang << std::endl;
    std::cout << "Stok Barang  : " << Barang::stokBarang << std::endl;
    std::cout << "Harga Barang : " << "Rp." << Barang::hargaBarang << std::endl;
    std::cout << std::endl;
}

int Barang::tambahStok(int tambah){
	int total;
	std::cout << "Stock barang ditambahkan !" << std::endl;
	std::cout << Barang::namaBarang << " ";
	total = Barang::stokBarang += tambah;
	std::cout << total << std::endl;
	return total;
}

int Barang::beliBarang(int jumlah){
    int totalHarga;
    std::cout << "Saya beli ";
    std::cout << Barang::namaBarang;
    std::cout << " sebanyak " << jumlah << std::endl;
    totalHarga = jumlah * Barang::hargaBarang;
    std::cout << "Total : " << "Rp." << totalHarga << std::endl;
    return totalHarga;
}

void Barang::sisaStok(){
    std::cout << this->namaBarang << ", Tersisa : " << this->stokBarang << std::endl;
}

// std::string Barang::totalBelanja(std::string namaBarang){
//     int totalHarga;
//     totalHarga = this->hargaBarang * this->stokBarang;
//     std::cout << std::endl;
// }