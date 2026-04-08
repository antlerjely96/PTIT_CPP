/*
	2. Nhap so nguyen n tu ban phim.
	Hien thi cac so tu 1 den n
	Tham so 1: i = 1
	Tham so 2: i < n
	Tham so 3: i++
	
	Bat dau
	Khai bao n
	Nhap n
	i = 1
	Vong lap duy tri khi i < n
		In ra i
		i++
	Ket thuc
	
	Note:
		"\t" => dau tab
		"\n" => xuong dong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Tham so 1
	int i = 1;
	//Vong lap
	cout << "Cac so tu 1 den " << n << " : ";
	for(i = 1; i < n; i++){
		cout << i << "\t";
	}
	return 0;
}
