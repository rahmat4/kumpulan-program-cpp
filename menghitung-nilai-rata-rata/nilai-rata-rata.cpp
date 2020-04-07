#include <iostream>
using namespace std;

class objek{
	public :
		void fungsi(){
			double n[10];
		cout <<"================================" << endl;
		cout <<"== menghitung nilai rata rata ==" << endl;
		cout <<"================================" << endl << endl;
	
		cout <<"masukan ada berapa nilai harian anda : ";
				cin >> n[0];
				for(int i=1;i<=n[0];i++){
					cout <<"masukan nilai ke " <<i <<" : ";
					cin >> n[1];
					n[2]+=n[1];
				}
				cout <<"\nmasukan berapa kali anda ulangan harian : ";
				cin >> n[3];
					for(int i=1;i<=n[3];i++){
					cout <<"masukan nilai ke " <<i <<" : ";
					cin >> n[1];
					n[4]+=n[1];
				}
				cout <<"\nmasukan nilai MID : ";
				cin >> n[5];
				cout <<"\nmasukan nilai hasil ujian semester : ";
				cin >> n[6];
				n[7]=n[2]+n[4]+n[5]+n[6];
				n[8]=n[7]/(n[0]+n[3]+1+1);
				cout <<"\njumlah nilai seluruhnya : " << n[7] << endl;
				cout <<"rata rata nilai : " << n[8] << endl;
		}
};

int main(){
	objek x;
	x.fungsi();
	
	return 0;
}
