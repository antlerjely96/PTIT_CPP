/*
	5. Nhap so nguyen n tu ban phim.
	Tinh tong cac so trong khoang tu 1 den n
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao tong
	int tong = 0;
	//Khai bao va nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Vong lap chay tu 1 den n
	for(int i = 1; i <= n; i++){
		tong += i;
	}
	//In ra ket qua
	cout << "Tong cac so tu 1 den n: " << tong << endl;
	return 0;
}
