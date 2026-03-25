#include <iostream>
using namespace std;

int main(){
	/*
		Quy tac:
			int + int => int
			int - int => int
			int * int => int
			int / int => int
			
			int + float => float
			int - float => float
			int * float => float
			int / float => float
			
			float + float => float
			float - float => float
			float * float => float
			float / float => float
	*/
	cout << 6 / 4 << endl;
	cout << 6.0 / 4 << endl;
	cout << 6.0 / 4.0 << endl;
	/*
		Ep kieu du lieu (Casting Data type): chuyen doi kieu du lieu nay thanh kieu du lieu khac
		Cu phap:
			(Kieu_du_lieu_duoc_chuyen)gia_tri_can_chuyen_doi
	*/
	cout << (float)6 / 4 << endl;
	return 0;
}
