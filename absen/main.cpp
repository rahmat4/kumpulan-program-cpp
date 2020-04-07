#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
using namespace std;

struct siswa{
	char nama[80],absen[8];
	char kls[5];
	char kejuruan[50];
	int NIM;
};

void setcolor(unsigned short color){
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,color);
}

int main(){
	siswa sis[80];
	int pilih,i,n=0,nim;
	bool ketemu;
	char ABSEN;
	
	kembali :
		system("cls");
	setcolor(15); cout <<" __________________________________________________" << endl;
	setcolor(15); cout <<"|___________________"; setcolor(15); cout <<"ABSENSI SISWA"; setcolor(15); cout <<"__________________|" << endl;
	setcolor(15); cout <<"|__________________________________________________|" << endl;
	setcolor(15); cout <<"|                                                  |" << endl;
	setcolor(15); cout <<"|    "; setcolor(15); cout <<"1.Input nama siswa                            "; setcolor(15); cout <<"|" << endl;
	setcolor(15); cout <<"|    "; setcolor(15); cout <<"2.Absen siswa                                 "; setcolor(15); cout <<"|" << endl;
	setcolor(15); cout <<"|    "; setcolor(15); cout <<"3.Lihat rekapan absen siswa                   "; setcolor(15); cout <<"|" << endl;
	setcolor(15); cout <<"|    "; setcolor(4); cout <<"4.Keluar                                      "; setcolor(15); cout <<"|" << endl;
	setcolor(15); cout <<"|__________________________________________________|" << endl << endl;
	setcolor(15); cout <<" pilih [1-4] : "; cin >> pilih;
	
	if(pilih == 1){
		lagi :
			cout << endl;
		cout <<"masukan NIM siswa	: "; cin >> nim;
		for(i=0;i<n;i++){
			if(nim == (sis[i].NIM))
				ketemu = true;
				else
				ketemu = false;
		}
		if(ketemu){
			cout <<"NIM siswa sudah ada, ulangi lagi" << endl;
			system("pause");
			goto lagi; cout << endl;
		}else{
			cout <<"masukan nama siswa      : "; cin >> sis[n].nama;
			cout <<"masukan kls siswa       : "; cin >> sis[n].kls;
			cout <<"masukan kejuruan siswa  : "; cin >> sis[n].kejuruan;
		}
		n+=1;
		sis[i].NIM = nim;
		system("pause");
		goto kembali;
	}else if(pilih == 2){
		cout << endl;
		cout <<" __________________________________________________________________________________ " << endl;
		cout <<"|____________________________________ABSEN SISWA___________________________________|" << endl;
		cout <<"|__________________________________________________________________________________|" << endl;
		cout <<"| no |        NIM        |      nama      |    kls    |   kejuruan   |    I/A/S    |" << endl;
		cout <<"|----|-------------------|----------------|-----------|--------------|-------------|" << endl;
		
		for(i=0;i<n;i++){
			cout << setw(3) << i + 1;
			cout << setw(16) << sis[i].NIM;
			cout << setw(18) << sis[i].nama;
			cout << setw(12) << sis[i].kls;
			cout << setw(15) << sis[i].kejuruan <<"	    ";
			cin >> sis[i].absen;
			cout <<"|----|-------------------|----------------|-----------|--------------|-------------|" << endl;
		}
		cout <<"|__________________________________________________________________________________|" << endl;
		system("pause");
		goto kembali;
	}else if(pilih == 3){
		cout << endl;
		cout <<" __________________________________________________________________________________" << endl;
		cout <<"|____________________________________ABSEN SISWA___________________________________|" << endl;
		cout <<"|__________________________________________________________________________________|" << endl;
		cout <<"| no |        NIM        |      nama      |    kls    |   kejuruan   |    I/A/S    |" << endl;
		cout <<"|----|-------------------|----------------|-----------|--------------|-------------|" << endl;
		
		for(i=0;i<n;i++){
			cout << setw(3) << i + 1;
			cout << setw(16) << sis[i].NIM;
			cout << setw(18) << sis[i].nama;
			cout << setw(12) << sis[i].kls;
			cout << setw(15) << sis[i].kejuruan <<"	    ";
			cout << sis[i].absen;
			cout << endl;
			cout <<"|----|-------------------|----------------|-----------|--------------|-------------|" << endl;
		}
		cout <<"|__________________________________________________________________________________|" << endl;
		system("pause");
		goto kembali;
	}else if(pilih == 4){
		cout << endl;
		cout <<"Terima kasih telah menggunakan program ini :)" << endl;
	}else{
		cout << endl;
		cout <<"pilihan yang anda masukan tidak ada!!!" << endl;
		system("pause");
		goto kembali;
	}
	
	cin.get();
	return 0;
}
