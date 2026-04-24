/* 
	2. Nhap so nguyen a tu ban phim. Kiem tra a la so am hay duong
	
	Xac dinh co bao nhieu nhiem vu => co bay nhieu ham
*/

#include <iostream>
using namespace std;

//Ham nhap
int Nhap(){
	int n;
	cin >> n;
	return n;
}
//Ham Kiemtra
void KiemTra(int a){
	if(a < 0){
		cout << a << " la so am" << endl;
	} else if(a > 0){
		cout << a << " la so duong" << endl;
	} else {
		cout << a << " la so khong am khong duong" << endl;
	}
}
//Ham main
int main(){
	cout << "a = ";
	int a = Nhap();
	KiemTra(a);
	return 0;
}
