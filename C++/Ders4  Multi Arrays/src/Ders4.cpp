//============================================================================
// Name        : Ders4.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Multi Arrays" << endl; // prints Multi Arrays

	int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	// ekrana elemanları yazdıralım
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matris[i][j];
		}
		cout << endl;
	}

	return 0;
}
