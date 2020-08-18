//============================================================================
// Name        : Ders25.cpp
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
	int salary;
public:
	// Employee constructor'u üç farklı tipte yazılınca aşırı yüklenmiş olacaktır.

	Employee(string name){ // First type
		this->name = name;
		this->salary = 0;
	}

	Employee(string name, int salary){ // Second type
		this->name = name; // this pointer her Class'a özgüdür
		this->salary = salary;
	}

	Employee(){ // Third type
			this->name = "Muhammed Salih";
			this->salary = 5000;
		}

	void showInfos(){ // Bilgileri yazdırır
		cout << endl;
		cout << endl << "Name : " << name;
		cout << endl << "Salary : " << salary;
	}

};

int main() {
	cout << "Constructor Overloading"; // prints Constructor Overloading

	Employee employee1("First type");
	employee1.showInfos();

	Employee employee2("Second type", 1500);
	employee2.showInfos();

	Employee employee3; // Boş consturctor bu şekilde çağırılır
	employee3.showInfos();

	return 0;
}
