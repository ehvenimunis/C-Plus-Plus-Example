//============================================================================
// Name        : Ders15.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Dinamik Bellek Yönetimi" << endl; // prints Dinamik Bellek Yönetimi

	int *ptr;

	int size;

	cout << "Kaç değer saklayacaksınız : ";
	cin >> size;

	ptr = new int[size];

	for(int i = 0; i < size; i++){
		cout << "Değer : ";
		cin >> ptr[i];
	}


	for(int i = 0; i < size; i++){
		cout << i << ". değer " << " = ";
		cout << ptr[i] << endl;
	}

	return 0;
}
