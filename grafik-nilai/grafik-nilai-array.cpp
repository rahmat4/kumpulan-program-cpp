#include <iostream>
using namespace std;

int main(){
	int n[10];
	cout <<"\t============================" << endl;
	cout <<"\t== grafik nilai mahasiswa ==" << endl;
	cout <<"\t============================" << endl;
	cout <<"masukan berapa mahasiswa yang mendapatkan nilai :" << endl << endl;
	for(int i=0;i<=n[10];i++){
		if(i==0){
			cout <<"0 - 9   : ";
		}else if(i==10){
			cout <<"100     : ";
		}else{
			cout <<i*10<<" - "<<(i*10)+9<<" : ";
		}
		cin >> n[i];
	}
	cout << endl;
	cout <<"grafik nilai" << endl << endl;
	for(int i=0;i<=10;i++){
		if(i==0){
			cout <<"0 - 9   : ";
		}else if(i==10){
			cout <<"100     : ";
		}else{
			cout <<i*10<<" - "<<(i*10)+9<<" : ";
		}
		
		for(int x=1;x<=n[i];x++){
		cout <<"*";
	}
	cout << endl;
		
	}
	
	return 0;
}
