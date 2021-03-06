//============================================================================
// Name        : Ders32.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
public:
	int a;

	// constructor
	Test(int a){
		this->a = a;
	}


};

int main() {

	cout << "Const Member Class and Methods" << endl; // prints Const Member Class and Methods

	// obje
	Test test1(10);
	test1.a = 20;
	cout << test1.a << endl;

	// const obje
	const Test test2(10); // obje "read only" oldu
	//test2.a = 20;
	// burada hata verir. çünkü sadece okunabilir, değişmez
	cout << test2.a << endl;

	return 0;
}
