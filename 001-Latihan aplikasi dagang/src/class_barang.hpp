#ifndef __BARANG
#define __BARANG

// #include <iostream>
#include <string>

class Barang{
	public:
		std::string namaBarang;
		int stokBarang;
		double hargaBarang;

		//Constructor
		Barang(char const* namaBarang, int stokBarang, double hargaBarang);
		
        //Destructor
		~Barang();

		//Class method
		void daftarBarang();

		int tambahStok(int tambah);

		int beliBarang(int jumlah);

		void sisaStok();

		// void totalBelanja();
};

#endif