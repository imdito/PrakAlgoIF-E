#include <iostream>
using namespace std;

int main(){
		
	int pilih, pilih_makanan, pilih_minuman, pilih_cekHarga;
	bool exit = false;
	int totalHarga = 0;
	string promo_code = "MUYPJ";
	string input_promo;
	int uang;
	
	do{
		cout << "=== Kantin Sekolah Digital ===\n";
		cout << "1. Makanan \n 2.Minuman \n 3. Cek Harga \n 4. Keluar\n";
		cout << "Pilih : " ; cin >> pilih;	
		
		switch(pilih){
			case 1 :
				system("cls");
				cout << "\n1. Nasi Goreng (Rp12.000)\n2. Mie Ayam Afui (Rp10.000) \n3. Roti Bakar (Rp.15.000)\n";
				cout << "Pilih : "; cin >> pilih_makanan;
				if(pilih_makanan == 1){
						totalHarga = totalHarga + 12000;
					}else if(pilih_makanan == 2){
							totalHarga = totalHarga + 10000;
						}else if(pilih_makanan == 3){
							totalHarga = totalHarga + 15000;
						}else{
								cout << "Menu Tidak Tersedia\n\n";
							}
				
			break;
			case 2:
			break;
			case 3:
				cout << "Total Harga Anda Saat Ini Adalah " << totalHarga << endl << endl;
				if(totalHarga > 10000){
						cout << "Anda Berhak Memasukkan kode promo, Silahkan input : "; cin>>input_promo;
						if(input_promo == promo_code){
								cout << "Selamat anda mendapatkan MBG \n\n";
								
							}  else{
								cout << "Maaf Kode salah!\n";
								}
					} 
					
				cout << "1. Bayar\n 2. batal \n 3. Kembali\n"; cin >> pilih_cekHarga;
				if(pilih_cekHarga == 1){
						cout << "Masukkan Uang Anda : "; cin>> uang;
						if(totalHarga == uang){
								cout << ""; 
							}else if(totalHarga > uang ){
									cout << "";
								}else if(totalHarga < uang){
									cout << "Kembalian Anda : Rp" << uang - totalHarga << endl;
									cout << "terima kasih\n"; 
									}
					}	
				
				
			break;
			case 4 :
				exit = true;
			break;
			default :
				system("cls"); //bersihin command line
				cout << "Menu Tidak Tersedia!! \n";
			break;
				
		}
	
	}while(exit == false);
	
	return 0;
}


