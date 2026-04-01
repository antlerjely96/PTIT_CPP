/* 3. Nhap so thuc la diem trung binh cua 1 hoc sinh
	Xet hoc sinh do co hoc luc loai gi.
	Dieu kien:
		diemTrungBinh < 0 hoac diemTrungBinh > 10: nhap sai
		diemTrungBinh < 5: Yeu
		diemTrungBinh < 6.5: Trung binh
		diemTrungBinh < 8: Kha
		Con lai: Gioi
		
	Buoc 1: Xac dinh input, output
		Input: diemTrungBinh
		Output: Xep loai hoc luc
	Buoc 2: Thiet ke thuat toan
		Bat dau
		Khai bao diemTrungBinh
		Nhap diemTrungBinh
		Kiem tra diemTrungBinh:
			Neu diemTrungBinh < 0 hoac diemTrungBinh > 10 thi hien thi "Nhap sai"
			Con neu diemTrungBinh < 5 thi hien thi "Yeu"
			Con neu diemTrungBinh < 6.5 thi hien thi "Trung binh"
			Con neu diemTrungBinh < 8 thi hien thi "Kha"
			Con lai thi hien thi "Gioi"
		In ra ket qua xet hoc luc
		Ket thuc
	Buoc 3: code
	Buoc 4: Chay test va debug (neu co)
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao diem trung binh
	double diemTrungBinh;
	//Nhap diem trung binh
	cout << "Diem trung binh: ";
	cin >> diemTrungBinh;
	//Kiem tra diem trung binh
	if(diemTrungBinh < 0 || diemTrungBinh > 10){
		cout << "Nhap sai" << endl;
	} else if(diemTrungBinh < 5){
		cout << "Yeu" << endl;
	} else if(diemTrungBinh < 6.5){
		cout << "Trung binh" << endl;
	} else if(diemTrungBinh < 8){
		cout << "Kha" << endl;
	} else {
		cout << "Gioi" << endl;
	}
	return 0;
}
