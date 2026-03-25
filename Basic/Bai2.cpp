/*
	2. Nhap 1 so nguyen SoGiay. Chuyen so giay do sang SoGio, SoPhut, SoGiayLe
	Vi du: Nhap SoGiay = 3750 thi hien thi 1 Gio 2 Phut 30 Giay
	
	Buoc 1: Input, Output
		Input: SoGiay
		Output: SoGio, SoPhut, SoGiayLe
	Buoc 2: Thiet ke thuat toan
		1. Bat dau
		2. Khai bao SoGiay
		3. Nhap SoGiay
		4. Tinh SoGio, SoPhut, SoGiayLe
		5. In ra Gio, Phut, Giay
		6. Ket thuc
	Buoc 3: Code
	Buoc 4: Chay thu va debug
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao Sogiay
	int SoGiay;
	//nhap SoGiay
	cout << "Nhap so giay: ";
	cin >> SoGiay;
	//Tinh
	int SoGio = SoGiay / 3600;
	int SoGiayConDu = SoGiay % 3600;
	int SoPhut = SoGiayConDu / 60;
	int SoGiayLe = SoGiayConDu % 60;
	//In ra ket qua
	cout << SoGiay << " tuong duong voi " << SoGio << " gio, " << SoPhut << " phut, " << SoGiayLe << " giay" << endl;
	return 0;
}
