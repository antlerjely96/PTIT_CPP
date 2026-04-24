/*
	14. In bang cuu chuong
*/

#include <iostream>
using namespace std;

int main(){
	//Vong lap chay i = 2 den 9
	for(int i = 2; i <= 9; i++){
		//Vong lap chay j = 1 den p
		for(int j = 1; j <= 9; j++){
			cout << i << " x " << j << " = " << i * j << "\t";
		}
		cout << endl;
	}
	return 0;
}
