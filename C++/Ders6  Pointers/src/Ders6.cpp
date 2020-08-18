//============================================================================
// Name        : Ders6.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Pointers" << endl; // prints Pointers

	int a = 8; // değişken için bellekte yer ayrıldı

	int *ptr = &a;

	// değişkenin adresine ulaşalım
	cout << "Değişken adresi : " << ptr << endl;
	cout << "Değişken adresi : " << &a << endl;

	// değerinin pointer ile değiştirelim
	*ptr = 18;

	cout << "Yeni değer : " << a << endl;
	return 0;
}
