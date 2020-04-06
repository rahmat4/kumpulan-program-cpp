#include <iostream>
using namespace std;

int main(){
	double a,b,hasil; char c;
	cout <<" __________________________________________ " << endl;
	cout <<"|==========kalkulator switch case==========|" << endl;
	cout <<"|__________________________________________|" << endl << endl;
	cout <<" masukan angka : ";
	cin >> a;
	cout <<" pilih operator *,/,-,+ : ";
	cin >> c;
	cout <<" masukan angka : ";
	cin >> b;
	cout << endl;
	cout <<" Hasil dari " << a << " " << c << " " << b <<" : ";
	switch(c){
		case '*': hasil = a*b; break;
		case '/': hasil = a/b; break;
		case '+': hasil = a+b; break;
		case '-': hasil = a-b; break;
		default : cout <<"operator yang anda masukan tidak ada. . . . . . " << endl;
	}
	cout << hasil << endl;
	
	cin.get();
	return 0;
}
