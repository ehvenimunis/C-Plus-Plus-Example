//============================================================================
// Name        : Ders12.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct student{
	int a;
	char c;
};

int main() {
	cout << "Sizeof" << endl; // prints Sizeof

	//DİNAMİK BELLEK AYIRIRKEN İŞE YARAYACAK BİR FONKSİYON SİZOF
	cout << "Integer bellekte " << sizeof(int) << " byte yer kaplar" << endl;
	cout << "Char bellekte " << sizeof(char) << " byte yer kaplar" << endl;
	cout << "Double bellekte " << sizeof(double) << " byte yer kaplar" << endl;
	cout << "Float bellekte " << sizeof(float) << " byte yer kaplar" << endl;

	cout << endl <<"Struct bellekte " << sizeof(student) << " byte yer kaplar" << endl;


	return 0;
}
