/*
	7. Nhap so nguyen n tu ban phim
	Kiem tra n co phai so nguyen to hay khong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao va nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Kiem tra n
	if(n < 2){
		//Hien thi
		cout << n << " khong la so nguyen to!" << endl;
	} else {
		int count = 0;
		//Vong lap chay tu 2 den n / 2
		for(int i = 2; i <= n / 2; i++){
			//Kiem tra n % i == 0
			if(n % i == 0){
				count++;
			}
		}
		//Kiem tra count == 0
		if(count == 0){
			cout << n << " la so nguyen to!" << endl;
		} else {
			cout << n << " khong la so nguyen to!" << endl;
		}
	}
	return 0;
}
