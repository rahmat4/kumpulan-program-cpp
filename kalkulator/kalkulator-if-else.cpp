#include <iostream>
using namespace std;

int main(){
	double a,b,hasil; char c;
	cout <<" ______________________________________ " << endl;
	cout <<"|==========kalkulator if else==========|" << endl;
	cout <<"|______________________________________|" << endl << endl;
	cout <<" masukan angka : ";
	cin >> a;
	cout <<" pilih operator *,/,-,+ : ";
	cin >> c;
	cout <<" masukan angka : ";
	cin >> b;
	cout << endl;
	cout <<" Hasil dari " << a << " " << c << " " << b <<" : ";
	if(c == '+'){
		hasil = a + b;
	}else if(c == '-'){
		hasil = a - b;
	}else if(c == '*'){
		hasil = a * b;
	}else if(c == '/'){
		hasil = a / b;
	}else{
		cout <<"operator tidak ada!!!" << endl;
	}
	
	cout << hasil << endl;
	
	cin.get();
	return 0;
}
