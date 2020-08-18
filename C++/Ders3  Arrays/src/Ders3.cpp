//============================================================================
// Name        : Ders3.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Arrays" << endl; // prints Arrays

	string array[4];

	for(int i =0; i < 4; i++){ // array içini doldurmak için değer alındı
		cin >> array[i];
	}

	for(int i =0; i < 4; i++){ // arrray elemanlarını yazdırmak için döngü
		cout << array[i] << endl;
	}

	return 0;
}
