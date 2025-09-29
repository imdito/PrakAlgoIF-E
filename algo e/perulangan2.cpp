#include <iostream>
using namespace std;

int tinggiGunung;
int energiPetualang = 100;
int ketinggianSekarang;
int pilihan;

int main(){
		cout << "Selamat datang di pendakian gunung!!!" << endl;
		cout << "Masukkan ketinggian gunung yang ada daki: ";
		cin >> tinggiGunung;
		cout << "\nGunung yang ingin anda daki adalah " << tinggiGunung << "mdpl" << endl;
		cout << "Energi anda adalah 100" << endl;
		
		for(ketinggianSekarang = 0; ketinggianSekarang <= tinggiGunung; ketinggianSekarang++){
			if(ketinggianSekarang % 100 == 0 && ketinggianSekarang > 0){
				cout << "Ketinggian saat ini adalah " << ketinggianSekarang << " mdpl" << endl;
				energiPetualang = energiPetualang - 5;
				cout << "Energi tersisa " << energiPetualang<< endl;
				if (energiPetualang < 0){
					cout << "Pendakian gagal, banyakin olahraga" << endl;
					return 0;
				}
			}
			if(ketinggianSekarang % 500 == 0 && ketinggianSekarang != 0){
				cout << "Anda sampai di pos, apakah anda ingin istirahat?" << endl;
				cout << "1. Ya\n2. Tidak\nPilihan anda: ";
				cin >> pilihan;
				if(pilihan == 1){
					cout << "Selamat istirahat di pos" << endl;
					cout << "Energi anda bertambah 20" << endl;
					energiPetualang = energiPetualang + 20;
					if(energiPetualang > 100)energiPetualang=100;
					cout << "Energi anda sekarang adalah " << energiPetualang << endl;
				} else if (pilihan == 2){
					if(energiPetualang != 0){
					cout << "Anda melanjutkan perjalanan" << endl;
					} else if (energiPetualang == 0){
					cout << "Pendakian gagal, banyakin olahraga" << endl;
					return 0;
					}
				}
			}
		}
		
		if (ketinggianSekarang == tinggiGunung){
			cout << "Sampai puncak uhuyy" << endl;
			cout << "Energi anda sekarang " << energiPetualang << endl;
		}
		
}
