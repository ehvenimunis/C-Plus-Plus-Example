//============================================================================
// Name        : Ders5.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// typename yerine "class" da yaz�labilir
template <typename T> //template prefix ( template'in �nceden tan�mlanmas�)
T test(T a){
	return a;
}


int main() {
	cout << "Template Function " << endl; // prints Template Function 

	cout << test(25) << endl;
	cout << test(25.6) << endl;
	cout << test("template") << endl;
	cout << test(-25) << endl;

	return 0;
}

/*
 * Template fonksiyonlar� kullanmak, soyut algoritma yazman�n yollar�ndan bi tanesi. Template fonksiyonlar yazd���m�zda,
 * yazd���m�z algoritma tiplere ba�l� olmadan �al���yor. Biz algoritmay� yazabildi�imiz en genel haliyle yaz�yoruz, sonra
 * i�ine istedi�imiz veri tipini g�ndererek �al��mas�n� sa�l�yoruz bu �ekilde yazd���m�z algoritmalar, soyut(abstract)
 * algoritmalar oluyor.
 */