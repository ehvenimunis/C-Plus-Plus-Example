//============================================================================
// Name        : Ders22.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
private:
	string name;
public:

	void setName(string isim){ // privete değişkene dolaylı yoldan ulaşmak ve değerini değiştirmek için oluşturulmuş bir fonksiyon
		name = isim;
	}

	string getName(){
		return name;
	}
};

int main() {
	cout << "Pointerlar ve Classlar" << endl; // prints Pointerlar ve Classlar

	Employee* employee = new Employee();; // Employee pointeri oluşturduk ve dinamik olarak yer ayırdık

	employee -> setName("XSART"); // pointer aracılığı ile fonksiyonlarımıza ulaştık
	cout << endl << employee->getName();

	return 0;
}
