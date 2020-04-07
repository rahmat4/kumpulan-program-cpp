#include <iostream>
#include <stdlib.h>
using namespace std;

int pilihan(int pilih);
void ivector();
void vector();

int main(){
	int harga,pesan,bayar,tot; char kembali;
	ulangL :
		system("cls");
	int pilih = pilihan(pilih);		
	
	cout << endl;
	if(pilih == 1){
		ivector();
	cout << endl;
	cout <<"kembali Y/N : ";
	cin >> kembali;
	if((kembali == 'Y') | (kembali == 'y')){
		goto ulangL;
	}else{
		goto selesaiL;
	}
	}else if(pilih == 2){
		vector();
		cout << endl;
		cout <<"kembali Y/N : ";
		cin >> kembali;
		if((kembali == 'Y') | (kembali == 'y')){
			goto ulangL;
		}else{
			goto selesaiL;
		}
	}else{
		cout <<"pilihan anda tidak ada. . . . . .!!!" << endl;
		system("pause");
		goto ulangL;
	}
	selesaiL :
	cout <<"program selesai. . . . . " << endl;
	system("pause");
	
	return 0;
}

int pilihan(int pilih){
	cout <<"\t\t======================================" << endl;
	cout <<"\t\tselamat datang di rumah makan podomoro" << endl;
	cout <<"\t\t======================================" << endl << endl;
	cout <<"1.Menu Makanan : " << endl;
	cout <<"\tayam bakar + nasi Rp.15000"<< endl;
	cout <<"\tayam bakar Rp.13000"<< endl;
	cout <<"\tikan bakar + nasi Rp.17000"<< endl;
	cout <<"\tikan bakar Rp.15000"<< endl;

	cout <<"2.Menu Minuman : " << endl;
	cout <<"\tjus anggur Rp.7000"<< endl;
	cout <<"\tjus melon Rp.8000"<< endl;
	cout <<"\tkopi gingseng Rp.5000"<< endl;
	cout <<"\tteh teler Rp.6000"<< endl << endl;
	cout <<"pilih [1-2]? : ";
	cin >> pilih;
	return pilih;
}

void ivector(){
	int pilih,harga,pesan,bayar,tot; char kembali;
	enum{rahmat = 1,nanda,ilas,daus};
	cout <<"Menu Makanan : " << endl;
	cout <<"\t1.ayam bakar + nasi Rp.15000"<< endl;
	cout <<"\t2.ayam bakar Rp.13000"<< endl;
	cout <<"\t3.ikan bakar + nasi Rp.17000"<< endl;
	cout <<"\t4.ikan bakar Rp.15000"<< endl << endl;
	cout <<"pilih [1-4]? : ";
	cin >> pilih; cout << endl;
	switch(pilih){
		case rahmat: cout <<"ayam bakar + nasi Rp.15000"<< endl;
		harga = 15000;
		cout <<"pesan berapa : ";
		cin >> pesan;
		tot = pesan*harga;
		cout <<"Harga Rp." << tot << endl;
		cout <<"Bayar Rp.";
		cin >> bayar;
		cout <<"kembali Rp." << bayar-tot << endl;
		break;
		case nanda: cout <<"\tayam bakar Rp.13000"<< endl;
		harga = 13000;
		cout <<"pesan berapa : ";
		cin >> pesan;
		tot = pesan*harga;
		cout <<"Harga Rp." << tot << endl;
		cout <<"Bayar Rp.";
		cin >> bayar;
		cout <<"kembali Rp." << bayar-tot << endl;
		break;
		case ilas: cout <<"\tikan bakar + nasi Rp.17000"<< endl;
		harga = 17000;
		cout <<"pesan berapa : ";
		cin >> pesan;
		tot = pesan*harga;
		cout <<"Harga Rp." << tot << endl;
		cout <<"Bayar Rp.";
		cin >> bayar;
		cout <<"kembali Rp." << bayar-tot << endl;
		break;
		case daus: cout <<"\tikan bakar Rp.15000"<< endl;
		harga = 15000;
		cout <<"pesan berapa : ";
		cin >> pesan;
		tot = pesan*harga;
		cout <<"Harga Rp." << tot << endl;
		cout <<"Bayar Rp.";
		cin >> bayar;
		cout <<"kembali Rp." << bayar-tot << endl;
		break;
		default: cout <<"pilihan anda tidak ada. . . . .!!!" << endl;
	}
}

void vector(){
	int pilih,harga,pesan,bayar,tot; char kembali;
	enum{rahmat = 1,nanda,ilas,daus};		
	cout <<"Menu Minuman : " << endl;
		cout <<"\t1.jus anggur Rp.7000"<< endl;
		cout <<"\t2.jus melon Rp.8000"<< endl;
		cout <<"\t3.kopi gingseng Rp.5000"<< endl;
		cout <<"\t4.teh teler Rp.6000"<< endl << endl;
		cout <<"pilih [1-4]? : ";
		cin >> pilih; cout << endl;
		switch(pilih){
			case rahmat: cout <<"\tjus anggur Rp.7000"<< endl;
			harga = 7000;
			cout <<"pesan berapa : ";
			cin >> pesan;
			tot = pesan*harga;
			cout <<"Harga Rp." << tot << endl;
			cout <<"Bayar Rp.";
			cin >> bayar;
			cout <<"kembali Rp." << bayar-tot << endl;
			break;
			case nanda: cout <<"\tjus melon Rp.8000"<< endl;
			harga = 8000;
			cout <<"pesan berapa : ";
			cin >> pesan;
			tot = pesan*harga;
			cout <<"Harga Rp." << tot << endl;
			cout <<"Bayar Rp.";
			cin >> bayar;
			cout <<"kembali Rp." << bayar-tot << endl;
			break;
			case ilas: cout <<"\tkopi gingseng Rp.5000"<< endl;
			harga = 5000;
			cout <<"pesan berapa : ";
			cin >> pesan;
			tot = pesan*harga;
			cout <<"Harga Rp." << tot << endl;
			cout <<"Bayar Rp.";
			cin >> bayar;
			cout <<"kembali Rp." << bayar-tot << endl;
			break;
			case daus: cout <<"\tteh teler Rp.6000"<< endl;
			harga = 6000;
			cout <<"pesan berapa : ";
			cin >> pesan;
			tot = pesan*harga;
			cout <<"Harga Rp." << tot << endl;
			cout <<"Bayar Rp.";
			cin >> bayar;
			cout <<"kembali Rp." << bayar-tot << endl;
			break;
			default: cout <<"pilihan anda tidak ada. . . . .!!!" << endl;
		}
}
