#include <iostream>

namespace kalkulator{
	
	int tambah(int a, int b){
		return a+b;
	}
	
	int kurang(int a, int b){
		return a-b;
	}
	
	int kali(int a, int b){
		return a*b;
	}
	
	int bagi(int a, int b){
		return a/b;
	}
}

int main(){
	double a,b, hasil; char c;
	std::cout <<"program kalkulator" << std::endl;
	std::cout <<"masukan angka : ";
	std::cin >> a;
	std::cout <<"pilih operator +,-,*,/ : ";
	std::cin >> c;
	std::cout <<"masukan angka : ";
	std::cin >> b;
	std::cout << std::endl;
	std::cout <<"hasil dari " << a <<" "<< c <<" "<< b <<" : ";
	if(c=='+'){
		hasil = kalkulator::tambah(a,b);
	}else if(c=='-'){
		hasil = kalkulator::kurang(a,b);
	}else if(c=='*'){
		hasil = kalkulator::kali(a,b);
	}else if(c=='/'){
		hasil = kalkulator::bagi(a,b);
	}else{
		std::cout <<"operator pilihan anda tidak ada. . . ." << std::endl;
	}
	
	std::cout << hasil << std::endl;
	
	std::cin.get();
	return 0;
}
