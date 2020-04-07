#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

struct bank{
	char nama[89];
	int norek,saldo;
};

void color(unsigned short color){
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

int main(){
	bank nabung[80];
	int norek,n,pilih,i,saldo,norekNew;
	bool ketemu;
	kembali :
		system("cls");
	cout <<" ______________________________________________________________ " << endl;
	cout <<"|_________________________SIMULASI ATM_________________________|" << endl;
	cout <<"|______________________________________________________________|" << endl;
	cout <<"|                                                              |" << endl;
	cout <<"|  1.daftar nasabah                                            |" << endl;
	cout <<"|  2.ubah pin                                                  |" << endl;
	cout <<"|  3.menabung                                                  |" << endl;
	cout <<"|  4.penarikan                                                 |" << endl;
	cout <<"|  5.cek daftar nasabah                                        |" << endl;
	cout <<"|  6.cari nasabah                                              |" << endl; 
	cout <<"|  "; color(4); cout <<"7.exit                                                      "; color(15); cout <<"|" << endl;
	cout <<"|______________________________________________________________|" << endl << endl;
	cout <<" pilih : "; cin >> pilih;
	cout << endl;
	
	while(pilih != 7){
		if(pilih == 1){
			lagi :
			cout <<"masukan no rekening : "; cin >> norek;
			for(i=0;i<n;i++){
				if(norek == (nabung[i].norek))
				ketemu = true;
				else
				ketemu = false;
			}
			if(ketemu){
				cout <<"No rekening tersebut telah di gunakan" << endl << endl;
				system("pause");
				goto lagi;
				system("cls");
			}else
				cout <<"masukan nama : "; cin >> nabung[n].nama;
				cout <<"masukan saldo awal Rp."; cin >> nabung[n].saldo;
				n+=1;
				nabung[i].norek = norek;
				cout << endl;
				system("pause");
				goto kembali;
		}else if(pilih == 2){
			cout <<"masukan no rekening lama : "; cin >> norek;
			for(i=0;i<n;i++){
				if(norek == nabung[i].norek){
					ketemu = true;
					break;
				}
				else
				ketemu = false;
			}
			if(ketemu){
				lagi1 :
				cout <<"masukan no rekening baru : "; cin >>norekNew;
				if(norekNew == nabung[i].norek){
					cout <<"no rekening tersebut telah di gunakan!!!" << endl << endl;
					system("pause");
					goto lagi1;
					system("cls");
				}else{
					nabung[i].norek = norekNew;
					cout << endl;
					system("pause"); cout << endl << endl;
					cout <<"no rekening berhasil di ganti menjadi " << nabung[i].norek << endl;
					//cout << nabung[i].norek << endl;
					for(i=0;i<n;i++){
						//if(nabung[i].norek == nabung[i].norek){
					
						//}
				}
				}
			}else{
				cout <<"no rekening tidak di temukan !!!" << endl;
			}
			nabung[i].norek = norek;
		}else if(pilih == 3){
			cout <<"masukan no rekening : "; cin >> norek;
			for(i=0;i<n;i++){
				if(norek == (nabung[i].norek)){
					ketemu = true;
					break;
				}
				else
					ketemu = false;
			}
			if(ketemu){
				cout << endl;
					cout <<"masukan saldo Rp."; cin >> saldo;
					nabung[i].saldo+=saldo;
					cout << endl;
					cout <<"transaksi berhasil" << endl;
					cout <<"saldo anda menjadi Rp." << nabung[i].saldo << endl;
				}else{
				cout << endl;
					cout <<"no rekening tidak ditemukan...." << endl;
				}
		}else if(pilih == 4){
			cout <<"masukan no rekening : "; cin >> norek;
			for(i=0;i<0;i++){
				if(norek == (nabung[i].norek)){
					ketemu = true;
					break;
				}
				else
				ketemu = false;
			}
			if(ketemu){
				again :
				cout <<"masukan nominal Rp."; cin >> saldo;
				if(saldo > (nabung[i].saldo)){
					cout <<"saldo anda tidak mencukupi " << endl;
					system("pause");
					goto again;
				}else{
					nabung[i].saldo-=saldo;
				}
				cout << endl;
				cout <<"transaaksi berhasil" << endl;
				system("pause");
				cout <<"saldo anda menjadi Rp." << nabung[i].saldo << endl;
			}else{
				cout <<"No rekening tidak ditemukan" << endl;
			}
		}else if(pilih == 5){
			cout <<" ______________________________________________________________________ " << endl;
			cout <<"|____________________________DAFTAR NASABAH____________________________|" << endl;
			cout <<"|______________________________________________________________________|" << endl;
			cout <<"| no |       no rekening       |       nama       |       saldo        |" << endl;
			cout <<"|----|-------------------------|------------------|--------------------|" << endl;
			for(i=0;i<n;i++){
				cout << setw(3) << i+1;
				cout << setw(18) << nabung[i].norek;
				cout << setw(23) << nabung[i].nama;
				cout << setw(14) << "Rp." << nabung[i].saldo << endl;
				cout <<"|----|-------------------------|------------------|--------------------|" << endl;
			}
			cout <<"|______________________________________________________________________|" << endl;
			
		}else if(pilih == 6){
			cout <<"masukan no rekening : "; cin >> norek;
			for(i=0;i<n;i++){
				if(norek == (nabung[i].norek)){
					ketemu = true;
					break;
				}
				else
				ketemu = false;
			}
			if(ketemu){
					cout <<" ____________________________________________ " << endl;
					cout <<"| no |       nama       |       saldo        |" << endl;
					cout <<"|----|------------------|--------------------|" << endl;
					cout << setw(3) << i+1;
					cout << setw(15) << nabung[i].nama;
					cout << setw(14) << "Rp." << nabung[i].saldo << endl;
					cout <<"|----|------------------|--------------------|" << endl;
					cout <<"|____________________________________________|" << endl;
				}else{
					cout <<"no rekening tidak ditemukan" << endl << endl;
				}
		}
		cout << endl;
		system("pause");
		goto kembali;
	}
	cout <<"Terimakasih telah bertransaksi di sini" << endl;
	
	cin.get();
	return 0;
}
