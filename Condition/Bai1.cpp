/* 1. Nhap so nguyen a tu ban phim. Kiem tra a la so am hay duong
	Buoc 1: Xac dinh input, output
		Input: a
		Output: a am hay duong
	Buoc 2: Thiet ke thuat toan
		Bat dau
		Khai bao a
		Nhap a
		Kiem tra, so sanh a voi 0: dieu kien a > 0
			Neu a > 0 thi hien thi a la so duong
			Con neu a < 0 thi hien thi a la so am
			Con lai a la so khong am khong duong
		Ket thuc
	Buoc 3: code
	Buoc 4: Chay test va debug (neu co)
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a
	int a;
	//Nhap a
	cout << "a = ";
	cin >> a;
	//Kiem tra a > 0
	if(a > 0){
		//Khoi lenh duoc thuc hien khi a > 0 tra ve true
		cout << "a la so duong!" << endl;
	} else if(a < 0) {
		//Khoi lenh duoc thuc hien khi a > 0 tra ve false, a < 0 tra ve true
		cout << "a la so am!" << endl;
	} else {
		//Khoi lenh duoc thuc hien khi a > 0 tra ve false, a < 0 tra ve false
		cout << "a la so khong am khong duong!" << endl;
	}
	return 0;
}

