//============================================================================
// Name        : Ders18.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// bir fonk yazdık
void fonk(){
	cout << "Name" << endl;
}

// fonksiyonu istediğimiz zaman parametre vererek kullanmak için yeniden yazdık
void fonk(string name1, int number){
	cout << "Name : " << name1 << " "<< number << endl;
}

int main() {
	cout << " Fonksiyon Overloading" << endl; // prints  Fonksiyon Overloading

	fonk(); // normal fonk
	fonk("Ahmet", 23); // parametreler ile aşırı yüklenmiş fonksiyon

	return 0;
}
