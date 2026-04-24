/*
	16. Nhap 2 so nguyen tu ban phim.
	Tim uoc chung lon nhat va boi chung nho nhat cua 2 so
*/

#include <iostream>
using namespace std;

int main(){
	//Nhap 2 so
	int a, b, c, d;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	c = a; d = b;
	//Kiem tra a > 0, b > 0
	if(a > 0 && b > 0){
		/* Tim UCLN */
		while (d != 0){
			int temp = d;
			d = c % d;
			c = temp;
		}
		cout << c << endl;
		/* Tim BCNN */
		cout << a * b / c << endl;
	}
	return 0;
}
