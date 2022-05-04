//============================================================================
// Name        : Ders13.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Dinamik Bellek Yönetimi" << endl;

	int *ptr = new int; // integer boyutunda bir alan aldık. içinde bir değer yok.

	*ptr = 5; // ptr nin gösterdiği yere değeri koyduk

	delete ptr; // belleğin tekrar bilgisayara/belleğe verilmesini sağladık

	// Büyük projelerde bellek yetmeyebilir. ihtiyacının olmadığı yerlede belleği boşaltmalısın

	return 0;
}
