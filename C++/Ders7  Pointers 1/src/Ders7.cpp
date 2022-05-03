//============================================================================
// Name        : Ders7.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string array[] = {"ali", "kuzey", "zylin"};

	cout << "array başlangıç adresi : " << array << endl;

	string *ptr = array;
	cout << "array başlangıç adresi : " << ptr << endl;
	cout << "array başlangıç değeri : " << *ptr << endl;
	cout << "array son değeri : " << *(ptr+2) << endl;
	cout << "array ikinci değeri : " << ptr[1] << endl;
	//cout << "array ikinci değeri : " << *(ptr+1) << endl;


	// integer 4 byte olduğunu görelim

	int a[2] = {{1}, {5}};
	int *poin = a;
	cout << endl << "a dizisi başlangıç adresi : " << poin << endl;
	cout << "a dizisi başlangıç adresine +1 ekleyerek 4 byte arttığını görelim : "
			<< poin+1 <<endl;

	// NOT : Eğer array indekslerini yani sınırlarını pointerler ile aşmaya çalışarak
	// bilmediğimiz adreslerdeki değerleri değiştirmeye çalışırsak
	// bilgisayarda istenmeyen durumlarr oluşabilir!




	return 0;
}
