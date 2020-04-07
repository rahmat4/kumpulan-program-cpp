#include <iostream>
#include <stdlib.h>
using namespace std;

void konversi(int bil){
	int bil1;
	if(bil>1){
		konversi(bil/2);
	}
	bil1=bil%2;
	cout << bil1;
}

int main(){
	int pilih,desimal; char huruf;
	kembali :
		system("cls");
	cout <<"1.Merubah bilangan desimal menjadi biner" << endl;
	cout <<"2.Merubah huruf menjadi desimal dan biner" << endl;
	cout <<"3.keluar" << endl << endl;
	
	cout <<" pilih : "; cin >> pilih;
	
	while(pilih!=3){
		switch(pilih){
			case 1 :
				cout <<"masukan bilangan desimal : "; cin >> desimal; cout << endl;
				cout <<"Biner : "; konversi(desimal); cout << endl;
				break;
			case 2 :
				cout <<"masukan bilangan huruf : "; cin >> huruf; cout << endl;
				cout <<"desimal : " << int (huruf); cout << endl;
				cout <<"Biner : "; konversi(huruf); cout << endl;
				break;
			default :
				cout <<"pilihan anda tidak ada..." << endl;
		}
		system("pause");
		goto kembali;
	}
	cout << endl <<"program selesai....." << endl;
	cin.get();
	return 0;
}
