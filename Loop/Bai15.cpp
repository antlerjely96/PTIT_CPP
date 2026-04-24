/*
	15. Nhap so nguyen n. Tinh
	S = 1/1 + 1/2 + 1/3 + ... + 1/n
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao va nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Vong lap chay i = 1 den n
	double S = 0;
	for(int i = 1; i <= n; i++){
		S += 1 / (double)i;
	}
	//In ra ket qua
	cout << "S = " << S << endl;
	return 0;
}
