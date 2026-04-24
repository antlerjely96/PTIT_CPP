/*
	12. Ve hinh
	*
	* *
	* * *
	* * * *
	* * * * *
	* * * * *
	* * * *
	* * *
	* *
	*
*/

#include <iostream>
using namespace std;

int main(){
	//Vong lap chay i = 1 den 5
	for(int i = 1; i <= 5; i++){
		//Vong lap chay j = 1 den i
		for(int j = 1; j <= i; j++){
			cout << "* ";
		}
		//Xuong dong
		cout << endl;
	}
	//Vong lap chay i = 1 den 5
	for(int i = 1; i <= 5; i++){
		//Vong lap chay j = 1 den 5 - i + 1
		for(int j = 1; j <= 5 - i + 1; j++){
			cout << "* ";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
