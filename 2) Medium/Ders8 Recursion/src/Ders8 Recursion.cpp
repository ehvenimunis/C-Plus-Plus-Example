//============================================================================
// Name        : Ders8.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int factorial(int);

int main() {
	cout << "Recursion " << endl; // prints Recursion 

    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1); // fonksiyonu tekrar tekrar �a��rd�k
    } else {
        return 1;
    }
}
