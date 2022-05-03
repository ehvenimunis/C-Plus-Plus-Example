//============================================================================
// Name        : Ders23.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Yapıcı metod yani class çerisinde bulunan değişkenlere değer atanmasını sağlar. Bu işlemi class için obje oluşturulduğunda yapar.
// Obje oluşturulur oluşturulmaz Class içerisindeki değişkenlere ilk değerleri atanmış olur.
// Private olarak constructor tanımlamak mümkün ancak bu ileri bir konu

class Employee{
private:
	string name;
	int age;
public:
	Employee(string isim, int yas){ // Constuctor class ile aynı isime sahip olamalı. bu bir kuraldır.
		name = isim;
		age = yas;
	}
	void showInfos(){
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
	}
};

int main() {
	cout << "Constructor (Yap�c� Metod)" << endl; // prints Constructor (Yap�c� Metod)

	// Constructor fonksiyonu kullanarak private değişkenlere obje oluşurken değer atayalım.
	Employee employee("Salih Aydoğan", 232);
	employee.showInfos();
	return 0;
}
