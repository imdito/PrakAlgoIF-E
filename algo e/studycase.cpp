#include <iostream>
using namespace std;

int film;
int umur;
int harga = 0;
int tambahan = 0;
int hari;
double diskon = 0.0;

int main(){
	cout << "Selamat datang di menu pemesanan tiket bioskop" << endl;
	cout << "1. Action (Rp.50.000)\n";
	cout << "2. Drama (Rp.40.000)\n";
	cout << "3. Animasi (Rp.35.000)\n";
	cout << "Masukkan jenis film : ";
	cin >> film;
	
	switch (film){
		case 1:
		harga = 50000;
		break;
		case 2:
		harga = 40000;
		break;
		case 3:
		harga = 35000;
		break;
		default:
		cout << "Menu yang dipilih tidak tersedia." << endl;
		return 0;
	}
	
	cout << "Masukkan umur penonton: ";
	cin >> umur;
	
	// Perhitungan diskon
	if (umur < 12){
		diskon = 0.5;
	} else if (umur > 12 && umur < 18){
		diskon = 0.2;
	} else if (umur > 18){
		diskon = 0.0;
	} else {
		cout << "Umur yang dipilih tidak sesuai kriteria.\n";
	}
	
	cout << "\nHari pemesanan: \n";
	cout << "1. Senin\n";
	cout << "2. Selasa\n";
	cout << "3. Rabu\n";
	cout << "4. Kamis\n";
	cout << "5. Jumát\n";
	cout << "6. Sabtu\n";
	cout << "7. Minggu\n";
	cout << "Masukkan Hari: ";
	cin >> hari;
	
	// Perhitungan harga tambahan
	if (hari >= 1 && hari <= 4){
		tambahan = 0;
	} else if (hari >= 5 && hari <= 7){
		tambahan = 5000;
	} else {
		cout << "Hari yang dipilih tidak valid!";
	}
	
	// Harga akhir
	double potongan = diskon * harga;
	int hargaTotal = (harga - potongan) + tambahan;
	
	cout << "Harga Akhir adalah : " << hargaTotal;
	
	return 0;
}

