/* 
	1. Nhap 2 so a va b la 2 so nguyen. Tinh +, -, *, / cua 2 so a va b
	
	Xac dinh co nhung ham nao
		=> can xac dinh co nhung nhiem vu nao can thuc hien
		=> Moi nhiem vu la 1 ham
	
	=> 5 nhiem vu = 5 function: Nhap, Tinh +, tinh -, tinh *, tinh /
	
	Luu y: 1 chuong trinh chi co 1 ham main. Moi ham khac deu phai viet truoc ham main
*/

#include <iostream>
using namespace std;

//Ham nhap
int Nhap(){
	//Khai bao va nhap
	int n;
	cin >> n;
	//Tra ve gia tri
	return n;
}
//Ham tinh +
int TinhTong(int a, int b){
	int tong = a + b;
	return tong;
}
//Ham tinh -
int TinhHieu(int a, int b){
	int hieu = a - b;
	return hieu;
}
//Ham tinh *
int TinhTich(int m, int n){
	int tich = m * n;
	return tich;
}
//Ham tinh /
double TinhThuong(int m, int n){
	double thuong = double(m) / n;
	return thuong;
}
//Ham in ket qua: void la kieu du lieu khong tra ve gia tri nao
void HienThi(int a, int b){
	cout << "a + b = " << TinhTong(a, b) << endl;
	cout << "a - b = " << TinhHieu(a, b) << endl;
	cout << "a * b = " << TinhTich(a, b) << endl;
	cout << "a / b = " << TinhThuong(a, b) << endl;
}
//Ham Main
int main(){
	cout << "a = ";
	//Goi ham nhap va gan gia tri tra ve tu ham nhap vao bien a
	int a = Nhap();
	cout << "b = ";
	//Goi ham nhap va gan gia tri tra ve tu ham nhap vao bien b
	int b = Nhap();
	HienThi(a, b);
	return 0;
}
