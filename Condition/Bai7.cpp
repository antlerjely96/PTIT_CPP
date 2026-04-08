/*
	7. Nhap 1 so nguyen. Hien thi nhu sau
	1 => Chu nhat
	2 => Thu hai
	3 => Thu ba
	...
	7 => Thu bay
*/

#include <iostream>
using namespace std;

int main(){
	//Khai bao thu
	int thu;
	//Nhap thu
	cout << "Nhap thu: ";
	cin >> thu;
	//Kiem tra thu
	cout << "if - else if - else" << endl;
	if(thu == 1){
		cout << "Chu nhat" << endl;
	} else if(thu == 2){
		cout << "Thu 2" << endl;
	} else if(thu == 3){
		cout << "Thu 3" << endl;
	} else if(thu == 4){
		cout << "Thu 4" << endl;
	} else if(thu == 5){
		cout << "Thu 5" << endl;
	} else if(thu == 6){
		cout << "Thu 6" << endl;
	} else if(thu == 7){
		cout << "Thu 7" << endl;
	} else {
		cout << "Nhap sai!" << endl;
	}
	cout << "switch - case" << endl;
	switch(thu){
		case 1:
			cout << "Chu nhat" << endl;
			break;
		case 2:
			cout << "Thu 2" << endl;
			break;
		case 3:
			cout << "Thu 3" << endl;
			break;
		case 4:
			cout << "Thu 4" << endl;
			break;
		case 5:
			cout << "Thu 5" << endl;
			break;
		case 6:
			cout << "Thu 6" << endl;
			break;
		case 7:
			cout << "Thu 7" << endl;
			break;
		default:
			cout << "Nhap sai" << endl;
			break;
	}
	return 0;
}
