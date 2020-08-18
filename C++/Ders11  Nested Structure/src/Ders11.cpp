//============================================================================
// Name        : Ders11.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Adress{
	string city_name;
	int no;
};

struct Employee{
	int id;
	string name;
	string department;
	Adress adress;
};

int main() {
	cout << "Nested Structure (iç içe yapılar)" << endl; // prints Nested Structure

	Employee employee = {12, "Ali", "Bilişim", {"istanbul", 23}};

	cout << endl << "Bilgiler : " << endl;
	cout << endl << employee.id << endl;
	cout << endl << employee.name << endl;
	cout << endl << employee.department << endl;
	cout << endl << employee.adress.city_name << endl;
	cout << endl << employee.adress.no << endl;

	return 0;
}
