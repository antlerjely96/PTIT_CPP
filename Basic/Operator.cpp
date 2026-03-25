#include <iostream>
using namespace std;

int main(){
	int a = 5;
	int b = a++;
	int c = ++a;
	// Toan tu %: chia lay du
	cout << 5 % 2 << endl;
	/* Toan tu ++: Tang len 1 don vi, chi ap dung voi bien
		Hau to: ++ dung sau bien. Vi du: b = a++ => lay a gan cho b truoc, sau do moi tang a len 1 don vi
		Tien to: ++ dung truoc bien. Vi du: c = ++a => Tang a len 1 don vi truoc, sau do moi gan a cho c
	*/
	cout << b << endl;
	cout << c << endl;
	//Toan tu --: Giam 1 don vi
	/* Toan tu ==: so sanh 2 gia tri co bang nhau hay khong
		Vi du: So sanh a bang 5 khong => a == 5
	*/
	/* Toan tu !=: so sanh 2 gia tri co khac nhau hay khong
		Vi du: So sanh a khac 5 khong => a != 5
	*/
	/* Toan tu &&:
		Vi du: a == 5 && b < 5 && b % 2 == 0
			a == 5 => True
			b < 5 => True
			b % 2 == 0 => True
			a == 5 && b < 5 && b % 2 == 0 => True
			
			a == 5 => True
			b < 5 => False
			b % 2 == 0 => True
			a == 5 && b < 5 && b % 2 == 0 => False
	*/
	/* Toan tu ||:
		Vi du: a == 5 || b < 5 || b % 2 == 0
			a == 5 => False
			b < 5 => False
			b % 2 == 0 => False
			a == 5 && b < 5 && b % 2 == 0 => False
			
			a == 5 => True
			b < 5 => False
			b % 2 == 0 => False
			a == 5 && b < 5 && b % 2 == 0 => True
	*/
	/* Toan tu !: Dao nguoc True => False, False => True
		Vi du: a == 5 => True
		!(a == 5) => False
	*/
	/* Toan tu =: Vi du a = 5 => Gan 5 vao a */
	/* Toan tu +=
		a += 5: Gán a + 5 vao a
		a += 5 tuong duong a = a + 5
		Vi du:
		a = 5;
		a += 10;
		=> a = 15
	*/
}
