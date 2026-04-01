/*
	4. Nhap thang la 1 so nguyen. Hien thi so ngay trong thang do
	
	Buoc 1: Xac dinh input, output
		Input: Thang
		Output: So ngay cua thang
	Buoc 2: Thiet ke thuat toan
		Bat dau
		Khai bao thang
		Nhap thang
		Kiem tra thang
			Neu thang la 1, 3, 5, 7, 8, 10, 12 thi hien thi "31 ngay"
			Con neu thang la 4, 6, 9, 11 thi hien thi "30 ngay"
			Con lai
				Khai bao nam
				Nhap nam
				Kiem tra nam
					Neu nam % 400 == 0 hoac (nam % 4 == 0 && nam % 100 != 0) thi hien thi "29 ngay"
					Con lai thi hien thi "28 ngay"
		Ket thuc
		
		Ma gia (Pseudo code)
		Begin
		Declare Thang
		Input Thang
		If thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 or thang == 12
			Then Display "31 ngay"
		Else if thang == 4 or thang == 6 or thang == 9 or thang == 11
			Then Display "30 ngay"
		Else
			Declare Nam
			Input Nam
			If Nam % 400 == 0 or (Nam % 4 == 0 And nam % 100 != 0)
				Then Display "29 ngay"
			Else
				Then Display "28 ngay" 
		End
	Buoc 3: Code
	Buoc 4: Chay test va debug (neu co)
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao thang
	int thang;
	//Nhap thang
	cout << "Nhap thang: ";
	cin >> thang;
	//Kiem tra thang
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		cout << "31 ngay" << endl;
	} else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
		cout << "30 ngay" << endl;
	} else {
		//Khai bao nam
		int nam;
		//Nhap nam
		cout << "Nhap nam: ";
		cin >> nam;
		//Kiem tra nam
		if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
			cout << "29 ngay" << endl;
		} else {
			cout << "28 ngay" << endl;
		}
	}
	return 0;
}
