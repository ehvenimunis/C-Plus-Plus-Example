//============================================================================
// Name        : Ders7.cpp
// Author      : Muhammed Salih Aydogan
// Version     : 0.1
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template <class Tur1, class Tur2>
Tur1 topla(Tur1 d1, Tur2 d2) {
  return d1 + d2;
}

int main() {
	cout << "Template Class 1" << endl; // prints Template Class 1

	int s1 = 7;
	double s2 = 2.75;
	cout << topla(s1, s2) << endl;
	cout << topla(s2, s1) << endl;

	return 0;
}
