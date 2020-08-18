//============================================================================
// Name        : Ders9.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printarray(const int *ptr1, const int *ptr2){ // const olduğu için elemanın değeri değişir ama adresi değişemez!
	for(; ptr1 != ptr2; ptr1++){
		cout << "Eleman : " << *ptr1 << endl;
	}
}

int main() {
	cout << "Pointer and Constant" << endl; // prints Pointer and Constant

	int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printarray(a+2, a+6);

	return 0;
}
