//============================================================================
// Name        : Ders19.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Student{
public:
	string name;

	void tellName(){
		cout << "Name : " << name << endl;
	}
};

int main() {
	cout << "Sınıflar (Class) ve Nesne Yönelimli Programlamaya(OOP)" << endl;

	// Class'a bağlı obje üretelim
	Student student1; // obje üretildi. bu obje Student tipindedir.
	student1.name = "Salih";

	Student student2; // obje üretildi. bu obje Student tipindedir.
	student2.name = "Salih Aydoğan";

	cout << student1.name << "   " << student2.name << endl;

	// Class içindeki metodu çağıralım
	student1.tellName();
	student2.tellName();

	return 0;
}
