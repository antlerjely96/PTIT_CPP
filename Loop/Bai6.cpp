/*
	6. Nhap so nguyen n tu ban phim.
	Tinh tong cac chu so cua n
	
	vi du: n = 5642231
	5642231 = 564223 * 10 + 1
	564223 = 56422 * 10 + 3
	56422 = 5642 * 10 + 2
	5642 = 564 * 10 + 2
	564 = 56 * 10 + 4
	56 = 5 * 10 + 6
	5 = 0 * 10 + 5
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao va nhap n
	int n;
	cout << "n = ";
	cin >> n;
	//Khai bao chuSo, tongChuSo
	int chuSo, tongChuSo = 0;
	//Vong lap do-while
	do {
		chuSo = n % 10;
		n = n / 10;
		tongChuSo += chuSo;
	} while(n != 0);
	/* Vong lap while
		while(n != 0){
			chuSo = n % 10;
			n = n / 10;
			tongChuSo += chuSo;
		}
	*/
	//In ra ket qua
	cout << "Tong cac so cua " << n << " la: " << tongChuSo << endl;
	return 0;
}
