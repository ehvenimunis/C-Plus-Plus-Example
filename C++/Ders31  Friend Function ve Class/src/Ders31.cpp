//============================================================================
// Name        : Ders31.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// private değişkenler sadece kendi sınıfı tarafından ulaşılan değişkenlerdir
class Employee{
private:
	int age;
	int salary;
	string name;
public:
	Employee(int age, int salary, string name){
		this->age = age;
		this->salary = salary;
		this->name = name;
	}

	friend void showInfos(Employee employee); // Friend fonksiyon Class içindeki private değerlere ulaşabilir.
	friend class Test;
};

// Class dışına bir fonksiyon yazalım
void showInfos(Employee employee){
	cout << employee.name << " " << employee.age << " " << employee.salary << endl; // private değerler yazıldı
}

// Friend olacak bir class yazalım, bu class diğer sınıfın private değerlerine ulaşmaya çalışsın
class Test{
public:
	static void showInfos(Employee employee){ // obje oluşturmadan fonksiyona sınıf üzerinden erişmek için static yaptık
		cout << employee.name << " " << employee.age << " " << employee.salary << endl; // private değerler yazıldı
	}

};
int main() {
	cout << "Friend Function ve Class" << endl; // prints Friend Function ve Class

	Employee employee(25, 5000, "Salih");
	showInfos(employee); // fonksiyon Employee sınıfı tipinde bir obje alıyor

	Employee employee1(45, 15000, "Ali"); // yeni bir obje oluşturduk
	Test::showInfos(employee1); // objeyi fonksiyona verdik

	return 0;
}
