#include <iostream>
using namespace std;

int main(){
		
	int harga;
	int menu;
	int uang, kembalian;
	cout << "Selamat datang"<<endl;
	cout << "1.Ayam Goreng\n";
	cout << "2.Nasi Goreng\n";
	cout << "3.Es Teh\n";
	cout << "4.Es Jeruk\n";
	cout << "Masukkan pilihan anda : ";
	cin >> menu;
	switch(menu){
		case 1 :
			cout << "Harga Ayam Goreng : Rp12000\n";
			harga = 12000;
			break;
		case 2 :
			cout << "Harga Nasi Goreng : Rp10000\n";
			harga = 10000;
			break;
		case 3 :
			cout << "Harga Es Teh : Rp3000\n";
			harga = 3000;
			break;
		case 4 :
			cout << "Harga Es Jeruk : Rp5000\n";
			harga = 5000;
			break;
		default :
			cout << "Menu tidak tersedia!!\n";
			break;
	}
	cout << "Masukkan uang anda : ";
	cin >> uang;
	
	if(uang < harga){
		cout << "Kurang mas" << endl;
	}else if (uang == harga){
			cout << "Terima kasih....";
		}else{
				kembalian = uang - harga;
				cout << "kembalian " << kembalian << endl ;
			}
		
	
}
