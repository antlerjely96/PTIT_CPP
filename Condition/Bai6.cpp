/*
	6. Nhap 3 so thuc tu ban phim.
	Kiem tra 3 so do co phai canh cua 1 tam giac hay khong
	Dieu kien de 3 so la 3 canh cua 1 tam giac: tong 2 so phai lon hon so con lai
	
	Bat dau
	Khai bao a, b, c
	Nhap a, b, c
	Neu a > 0 && b > 0 && c > 0 thi
		Neu a + b > c && b + c > a && a + c > b
			In ra "a, b, c tao thanh tam giac"
		Con lai
			In ra "a, b, c khong tao thanh tam giac"
	Con lai
		In ra "a, b, c khong thanh tam giac"
	Ket thuc
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	float a, b, c;
	//Nhap a, b, c
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	//Kiem tra a, b, c > 0
	if(a > 0 && b > 0 && c > 0){
		//Kiem tra tong 2 so co lon hon so con lai khong
		if(a + b > c && b + c > a && a + c > b){
			cout << "a, b, c tao thanh tam giac" << endl;
		} else {
			cout << "a, b, c khong tao thanh tam giac" << endl;
		}
	} else {
		cout << "a, b, c tao thanh tam giac" << endl;
	}
	return 0;
}
