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
		cout << "Eleman : " << *ptr1 << endl << endl;
	}
}

int main() {
	cout << "Pointer and Constant" << endl; // prints Pointer and Constant

	int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
	printarray(a+2, a+6);



	// Pointers to constant:

    int high{ 100 };
    int low{ 66 };
    const int* score{ &high };

    // Pointer variable are read from
    // the right to left
    cout << *score << "\n";

    // Score is a pointer to integer
    // which is constant *score = 78

    // It will give you an Error:
    // assignment of read-only location
    // ‘* score’ because value stored in
    // constant cannot be changed
    score = &low;

    // This can be done here as we are
    // changing the location where the
    // score points now it points to low
    cout << *score << "\n";



    //Constant pointers
    cout << endl;
    int ab{ 90 };
    int bb{ 50 };

    int* const ptrt{ &ab };
    cout << *ptrt << "\n";
    cout << ptrt << "\n";

    // Address what it points to

    *ptrt = 56;

    // Acceptable to change the
    // value of a

    // Error: assignment of read-only
    // variable ‘ptrt’
    // ptrt = &bb;

    cout << *ptrt << "\n";
    cout << ptrt << "\n";




    // Constant Pointers to constants

    const int aa{ 50 };
     const int ba{ 90 };

     // ptr points to a
     const int* const ptra{ &aa };

     // *ptr = 90;
     // Error: assignment of read-only
     // location ‘*(const int*)ptra’

     // ptr = &b;
     // Error: assignment of read-only
     // variable ‘ptr’

     // Address of a
     cout << endl <<  ptra << "\n";

     // Value of a
     cout << *ptra << "\n";



	return 0;
}
