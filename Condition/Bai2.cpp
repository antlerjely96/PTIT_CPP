/* 2. Nhap 1 so nguyen a. Kiem tra a la so duong hay am.
	Neu a la so duong thi kiem tra a la so chan hay le
	
	Buoc 1: Xac dinh input, output
		Input: a
		Output: a am hay duong, chan hay le
	Buoc 2: Thiet ke thuat toan
		Bat dau
		Khai bao a
		Nhap a
		Kiem tra, so sanh a voi 0: dieu kien a > 0
			Neu a > 0 thi hien thi a la so duong
				Neu a % 2 == 0 thi hien thi a la so chan
				Con lai thi hien thi a la so le
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
		if(a % 2 == 0){
			cout << "a la so chan!" << endl;
		} else {
			cout << "a la so le!" << endl;
		}
	} else if(a < 0) {
		//Khoi lenh duoc thuc hien khi a > 0 tra ve false, a < 0 tra ve true
		cout << "a la so am!" << endl;
	} else {
		//Khoi lenh duoc thuc hien khi a > 0 tra ve false, a < 0 tra ve false
		cout << "a la so khong am khong duong!" << endl;
	}
	return 0;
}
