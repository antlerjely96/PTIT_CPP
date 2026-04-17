/*
	3. Nhap so nguyen n tu ban phim.
	Hien thi cac so chan trong khoang tu 1 den n
	
	Tham so 1: Thoi diem bat dau vong lap
	Tham so 2: Dieu kien duy tri vong lap
	Tham so 3: Buoc nhay cua vong lap
*/

#include <iostream>
using namespace std;

int main(){
	//khai bao n
	int n;
	//Nhap n
	cout << "n = ";
	cin >> n;
	//Tham so 1
	int i = 1;
	//Vong lap chay tu 1 den n
	for(i = 1; i <= n; i++){
		//Kiem tra so i la so chan hay le
		if(i % 2 == 0){
			//Hien thi i
			cout << i << "\t";
		}
	}
	return 0;
}
