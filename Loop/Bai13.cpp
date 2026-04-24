/*
	13. Ve hinh
	1
	1 2
	1 2 3
	1 2 3 4
	1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main(){
	//Vong lap chay i = 1 den 5
	for(int i = 1; i <= 5; i++){
		//Vong lap chay j = 1 den i
		for(int j = 1; j <= i; j++){
			cout << j << " ";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
