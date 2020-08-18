//============================================================================
// Name        : Ders17.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Foreach Döngüsü" << endl;

	int a[] = {1, 2, 3, 4, 7, 10};

	for(int i = 0; i<6; i++){
		cout << a[i] << endl;
	}


	// şimdi aynı işlemi foreach ile yapalım
	for(int item:a){
		cout << item << " ";
	}

	return 0;
}
