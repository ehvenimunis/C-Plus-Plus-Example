//============================================================================
// Name        : Ders22.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Pointerlar ve Sınıflarlar
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
	cout << "Pointerlar ve Sınıflar" << endl; // prints Pointerlar ve Sınıflarlar

	Employee* employee = new Employee();; // Employee pointeri oluşturduk ve dinamik olarak yer ayırdık

	employee -> setName("EbubekirOsmanAli"); // pointer aracılığı ile fonksiyonlarımıza ulaştık
	cout << endl << employee->getName();

	delete employee;

	return 0;
}
