//============================================================================
// Name        : Ders30.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Matematik{
public:
	static void cube(int x){
		cout << x * x * x << endl;
	}

	static void add2(int x){
		cout << x + 2 << endl;
	}
};

// Önceki örnekte olduğu gibi statik metodlar objelere özgü değil sınıflara özgü metodlardır.
int main() {
	cout << "Static Method" << endl; // prints Static Method

	Matematik::cube(3); // Static olduğu için sınıf ismi üzerinden bu metodlara erişebildik.
	Matematik::add2(5);


	return 0;
}
