//============================================================================
// Name        : Ders20.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Header Dosyaları ve Implementasyon
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Employee.h"


using namespace std;

int main() {
	cout << "Header Dosyaları ve Implementasyon" << endl; // prints Header Dosyaları ve Implementasyon

	Employee employee;
	employee.id = 12;
	employee.name = "Ali";
	employee.salary = 262;

	employee.showInfos();

	return 0;
}
