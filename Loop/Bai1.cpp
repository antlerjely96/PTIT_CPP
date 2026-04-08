/*
	1. In ra cac so tu 1 den 50.
	Tham so 1: 1
	Tham so 2: < 50
	Tham so 3: +1
	
	for, while: kiem tra tham so 2 truoc, thuc hien khoi lenh sau
		=> for, while co the duoc thuc hien 0 hoac n lan
	do - while: thuc hien khoi lenh truoc, kiem tra tham so 2 sau
		=> do - while co the thuc hien 1 hoac n lan
*/

#include <iostream>
using namespace std;

int main(){
	/* for */
	cout << "--- for ---" << endl;
	//Khai bao bien
	int i = 1;
	for(i = 1; i < 50; i++){
		cout << i << "\t";
	}
	cout << endl;
	/* while */
	cout << "--- while ---" << endl;
	i = 1;
	while(i < 50){
		cout << i << "\t";
		i++;
	}
	cout << endl;
	/* do - while */
	cout << "--- do - while ---" << endl;
	i = 1;
	do {
		cout << i << "\t";
		i++;
	} while(i < 50);
	return 0;
}
