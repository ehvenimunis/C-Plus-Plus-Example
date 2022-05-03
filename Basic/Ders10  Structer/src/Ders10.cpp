//============================================================================
// Name        : Ders10.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct yapi{
	int id;
	string name;
	string department;
	};

void showYapi(yapi a){ // burada obje üzerinde değişiklik yapamazsın
	cout << endl << a.id << endl;
	cout << "name : " << a.name << endl;
	cout << "department : " << a.department << endl;
}

void showYapi(yapi* a){ // değer değiştirilebilir.

	// değeri değiştirelim
	a->id = 8000;
	cout << endl << a->id << endl;
	cout << "name : " << a->name << endl;
	cout << "department : " << a->department << endl;
}

int main() {
	yapi example = {111, "ali", "iş"};
	cout << example.id << " " << example.name << " " << example.department << endl;


	// pointer ile erişelim
	yapi* ptr = &example;
	cout << ptr->department << endl;

	// fonksiyona değer olarak gönderelim
	showYapi(example);
	showYapi(&example);

	// id değeri değişmiş mi bakalım
	cout << endl << "id yeni değeri : " << ptr->id << endl;
	return 0;
}
