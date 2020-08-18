//============================================================================
// Name        : Ders5.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Switch Case" << endl; // prints Switch Case

	int a = 0;

	cout << "İşlemi giriniz : " ;
	cin >> a;

	switch(a){
		case 1:
			cout << "1 seçtiniz!" << endl; // 1 yaz ve "break" olmadığında ne olduğunu gör!
		case 2:
			cout << "2 seçtiniz!" << endl;
		case 3:
			cout << "3 seçtiniz!" << endl;
			break;
		case 4:
			cout << "4 seçtiniz!" << endl;
			break;
		case 5:
			cout << "5 seçtiniz!" << endl;
			break;
		default:
			cout << "Hiçbir şey seçilmedi";
			break;
	}

	return 0;
}
