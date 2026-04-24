/*
	17. Nhap so nguyen n tu ban phim
	Hien thi cac so nguyen to trong khoang tu 1 den n
	Goi y: dùng nested loop de kiem tra i co phai so nguyen to khong
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao va nhap n
	int n, count;
	cout << "n = ";
	cin >> n;
	//Kiem tra n < 2
	if(n < 2){
		cout << "Khong co so nguyen to" << endl;
	} else {
		//Vong lap i = 2 den n
		for (int i = 2; i <= n; i++){
			/* Kiem tra i co phai so nguyen to khong */
			//Khai bao count
			count = 0;
			//Vong lap j = 2 den i
			for(int j = 2; j < i; j++){
				//Kiem tra i % j == 0
				if(i % j == 0){
					count++;
				}
			}
			//Kiem tra count
			if(count == 0){
				cout << i << "\t";
			}
		}
	}
	return 0;
}
