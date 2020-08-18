//============================================================================
// Name        : Ders5.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// typename yerine "class" da yazılabilir
template <typename T> //template prefix ( template'in önceden tanımlanması)
T test(T a){ // template == şablon
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
 * Template fonksiyonları kullanmak, soyut algoritma yazmanın yollarından bi tanesi. Template fonksiyonlar yazdığımızda,
 * yazdığımız algoritma tiplere bağlı olmadan çalışıyor. Biz algoritmayı yazabildiğimiz en genel haliyle yazıyoruz, sonra
 * içine istediğimiz veri tipini göndererek çalışmasını sağlıyoruz bu şekilde yazdığımız algoritmalar, soyut(abstract)
 * algoritmalar oluyor.
 */
