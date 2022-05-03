//============================================================================
// Name        : 2.3.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Vector and Iterator Invalidation
// Description : Hello World in C++, Ansi-style
//============================================================================

// CPP program to illustrate
// Application of erase() function
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myvector{ 1, 2, 3, 4, 5, 6, 7, 8, 9};


	for (auto i = myvector.begin(); i != myvector.end(); ++i) {

		if (*i % 2 == 0) {
			myvector.erase(i);
			//i--;
		}
	}

	/*
	 * Iterator Invalidation
	 *
	 * In the above example code, it may happen that when we erase an element while iterating the vector,
	 * the size of the vector can get more than the maximum size due to which a new memory is allocated to
	 * the vector and all elements are copied there. But, our iterator still points to the previous old memory address.
	 * So, now we can say that iterator gets invalidated. This is one example of invalidation.
	 * Given below are some rules for iterator invalidation.
	 */

	cout << endl;

	// Printing the vector
	for (auto it = myvector.begin(); it != myvector.end(); ++it){
		cout << ' ' << *it << "  adress : " << &it << endl;
	}

	// Diyelim ki vector'ün boyunu 10 eleman kadar kýsaltmak istiyoruz. Þöyle yaparýz.
	//myvector.resize(myvector.size()-10);  // Bu kod aslýnda þu kod ile aynýdýr: v.erase(v.end() - 10, v.end());

	return 0;
}
