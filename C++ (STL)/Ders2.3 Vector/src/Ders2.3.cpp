//============================================================================
// Name        : 2.3.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Vector
// Description : Hello World in C++, Ansi-style
//============================================================================

// CPP program to illustrate
// Application of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (auto i = myvector.begin(); i != myvector.end(); ++i) {
		if (*i % 2 == 0) {
			cout << &i << endl;
			myvector.erase(i);
			//i--;
		}
	}

	// Printing the vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it){
		cout << ' ' << *it << "  adres : " << &it << endl;
	}

	return 0;
}
