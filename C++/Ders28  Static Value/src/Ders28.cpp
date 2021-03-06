//============================================================================
// Name        : Ders28.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(){
	int i = 3;
	i++;
	cout << "i'nin değeri : " << i << endl;
}

void testStatic(){
	static int k = 3;
	k++;
	cout << "k'nın değeri : " << k << endl;
}
int main() {
	cout << "Static Value" << endl; // prints Static Value

	test(); // fonksiyon çağırıldı ve değişken değerini alıp gösterildi. ancak fonk çalışması bittikten sonra "i" değişkeni ortadan kalkacaktır.
	// Bu neye sebep olur?
	// Fonksiyondan sonra "i" değişkenini kullanamam. Kullanabilmek için statik değişken olması gerekir.

	test();
	test(); // Tekrar tekrar çağırılsa da değiken değeri değişmez.

	// Şimdi static değişkenli olanı çağıralım
	testStatic();
	testStatic();
	testStatic();
	testStatic();
	testStatic();
	return 0;
}
