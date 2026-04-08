/*
	5. Nhap 3 so nguyen a, b, c.
	Hien thi so lon nhat va so nho nhat trong 3 so
	
	Bat dau
	Khai bao a, b, c
	Nhap a, b, c
	Khai bao max = a
	Kiem tra max < b
		Neu max < b thi gan max = b
	Kiem tra max < c
		Neu max < c thi gan max = c
	Khai bao min = a
	Kiem tra min > b
		Neu min > b thi gan min = b
	Kiem tra min > c
		Neu min > c thi gan min = c
	In ra max, min
	Ket thuc
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao a, b, c
	int a, b, c;
	//Nhap a, b, c
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	//Khai bao max = a
	int max = a;
	//Kiem tra max < b
	if(max < b){
		max = b;
	}
	//Kiem tra max < c
	if(max < c){
		max = c;
	}
	//Khai bao min = a
	int min = a;
	//Kiem tra min > b
	if(min > b){
		min = b;
	}
	//Kiem tra min > c
	if(min > c){
		min = c;
	}
	//In ra max, min
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	return 0;
}
