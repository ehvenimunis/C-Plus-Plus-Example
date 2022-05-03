//============================================================================
// Name        : Ders8.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Referanslar" << endl; // prints Referanslar

	int a = 10;
	int &ref = a;

	ref++;
	cout << "a'nın değeri : " << a << endl;

	// referansların pointerlerden farkı : bir fonksiyon referans değeri alıyorsa
	// değerin kendisini göndermemiz yeterli. pointerlerde ise adres gönderiliyordu.

	// referansların kullanılması daha kolaydır.

	return 0;
}
