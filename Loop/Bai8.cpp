/*
	8. In ra hinh
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
*/

#include <iostream>
using namespace std;

int main(){
	//In ra cac dong
	for(int i = 1; i <= 5; i++){
		//In ra cac dau * trong 1 dong
		for(int j = 1; j <= 5; j++){
			cout << "* ";
		}
		//Xuong dong
		cout << endl;
	}
	return 0;
}
