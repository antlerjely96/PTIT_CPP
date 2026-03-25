#include <iostream>
using namespace std;

//Nhap 2 so a va b la 2 so nguyen. Tinh +, -, *, / cua 2 so a va b
/*
	Buoc 1: Xac dinh input, output
		output: a + b, a - b, a * b, a / b
		input: a, b
	Buoc 2: Thiet ke thuat toan: Dua ra cac buoc giai quyet bai toan
		Bat dau
		Khai bao a, b
		Nhap a, b
		Tinh a + b, a - b, a * b, a / b
		In ra ket qua +, -, *, /
		Ket thuc
		
		Ve so do khoi (Flowchart)
	Buoc 3: Trien khai cod theo Flowchart
	Buoc 4: Chay thu, debug neu co loi
*/

int main(){
	//Khai bao 2 bien a, b co kieu du lieu int
	int a;
	int b;
	//Nhap a, b
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	//Tinh tong, hieu, tich, thuong
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	double thuong = (double)a / b;
	//In ra ket qua
	cout << "a + b = " << tong << endl;
	cout << "a - b = " << hieu << endl;
	cout << "a * b = " << tich << endl;
	cout << "a / b = " << thuong << endl;
	return 0;
}
