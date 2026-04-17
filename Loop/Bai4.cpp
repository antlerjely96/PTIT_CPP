/*
	4. Nhap so nguyen n tu ban phim.
	Tinh n!
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao giaiThua
	int giaiThua = 1;
	//Khai bao va nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Vong lap tu 1 den n
	for(int i = 1; i <= n; i++){
		giaiThua *= i;
	}
	//In ra ket qua
	cout << "n! = " << giaiThua << endl;
	return 0;
}
