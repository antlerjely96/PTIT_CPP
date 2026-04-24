/* 3. Nhap so thuc la diem trung binh cua 1 hoc sinh
	Xet hoc sinh do co hoc luc loai gi.
	Dieu kien:
		diemTrungBinh < 0 hoac diemTrungBinh > 10: nhap sai
		diemTrungBinh < 5: Yeu
		diemTrungBinh < 6.5: Trung binh
		diemTrungBinh < 8: Kha
		Con lai: Gioi
*/

#include <iostream>
using namespace std;

//Ham Nhap
double Nhap(){
	double n;
	cin >> n;
	return n;
}
//Ham KiemTra
void KiemTra(double diem){
	if(diem < 0 || diem > 10){
		cout << "Nhap sai" << endl;
	} else if(diem < 5){
		cout << "Yeu" << endl;
	} else if(diem < 6.5){
		cout << "Trung binh" << endl;
	} else if(diem < 8){
		cout << "Kha" << endl;
	} else {
		cout << "Gioi" << endl;
	}
}
//Ham main
int main(){
	cout << "diem = ";
	double diem = Nhap();
	KiemTra(diem);
	return 0;
}
