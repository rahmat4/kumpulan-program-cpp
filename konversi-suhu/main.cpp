#include <iostream>
#include <windows.h>
#include <stdlib.h>
using namespace std;

void setcolor(unsigned short color){
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

int main(){
	
	int pilih;
	double suhu;
	
	menu :
		system("cls");
	setcolor(15); cout <<" _______________________________________ " << endl;
	setcolor(15); cout <<"|_____________KONVERSI SUHU_____________|" << endl;
	setcolor(15); cout <<"|_______________________________________|" << endl;
	setcolor(15); cout <<"|                                       |" << endl;
	setcolor(15); cout <<"|  1.celsius                            |" << endl;
	setcolor(15); cout <<"|  2.reamur                             |" << endl;
	setcolor(15); cout <<"|  3.farenhit                           |" << endl;
	setcolor(15); cout <<"|  4.kelvin                             |" << endl;
	setcolor(15); cout <<"|  5.rankie                             |" << endl;
	setcolor(15); cout <<"|"; setcolor(4); cout <<"  6.exit                               "; setcolor(15); cout <<"|" << endl;
	setcolor(15); cout <<"|_______________________________________|" << endl << endl;
	setcolor(15); cout <<" pilih [1-6] : ";
	cin >> pilih;
	
	while(pilih != 6){
		switch(pilih){
			case 1 :
				cout << endl;
				cout <<"celsius  : "; cin >> suhu;
				cout << endl;
				cout <<"reamur   : " << suhu*4/5 << endl;
				cout <<"farenhit : " << suhu*9/5+32 << endl;
				cout <<"kelvin   : " << suhu+273.15 << endl;
				cout <<"rankie   : " << suhu*9/5+491.67 << endl;
				break;
			case 2 :
				cout << endl;
				cout <<"reamur   : "; cin >> suhu;
				cout << endl;
				cout <<"celsius  : " << suhu/0.8 << endl;
				cout <<"farenhit : " << suhu*2.25+32 << endl;
				cout <<"kelvin   : " << suhu/0.8+273.15 << endl;
				cout <<"rankie   : " << suhu*2.25+491.67 << endl;
				break;
			case 3 :
				cout << endl;
				cout <<"farenhit : "; cin >> suhu;
				cout << endl;
				cout <<"celsius  : " << (suhu-32)*5/9 << endl;
				cout <<"reamur   : " << (suhu-32)*4/9 << endl;
				cout <<"kelvin   : " << (suhu-32)*5/9+273.15 << endl;
				cout <<"rankie   : " << suhu+459.67 << endl;
				break;
			case 4 :
				cout << endl;
				cout <<"kelvin   : "; cin >> suhu;
				cout << endl;
				cout <<"celsius  : " << suhu-273.15 << endl;
				cout <<"reamur   : " << (suhu-273.15)*4/5 << endl;
				cout <<"farenhit : " << (suhu-273.15)*9/5+32 << endl;
				cout <<"rankie   : " << suhu*1.8 << endl;
				break;
			case 5 :
				cout << endl;
				cout <<"rankie : "; cin >> suhu;
				cout << endl;
				cout <<"celsius  : " << (suhu-491.67)*5/9 << endl;
				cout <<"reamur   : " << (suhu/1.8-273.15)*0.8 << endl;
				cout <<"farenhit : " << suhu-459.67 << endl;
				cout <<"kelvin   : " << suhu/1.8 << endl;
				break;
		}
		cout << endl;
		system("pause");
		goto menu;
	}
	cout << endl;
	cout <<"program selesai...." << endl;
	system("pause");
	
	cin.get();
	return 0;
}
