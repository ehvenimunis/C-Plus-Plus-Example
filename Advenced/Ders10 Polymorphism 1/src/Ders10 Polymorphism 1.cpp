//============================================================================
// Name        : Ders10.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Bu örnekte operatörün aþýrý yüklemesi sonucu ortaya çýkan çok çeþitlilik konu olacaktýr
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Complex {
private:
	int real, imag;
public:
	Complex(int r = 0, int i =0) {real = r; imag = i;} // constructor

	// This is automatically called when '+' is used with
	// between two Complex objects
	Complex operator + (Complex const &obj) {
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	void print() { cout << real << " + i" << imag << endl; }
};

int main() {
	cout << "Polymorphism 1" << endl; // prints Polymorphism 1

	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1 + c2; // An example call to "operator+"
	c3.print();

	return 0;
}
