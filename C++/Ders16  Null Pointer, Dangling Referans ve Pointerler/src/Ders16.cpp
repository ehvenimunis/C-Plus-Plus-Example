//============================================================================
// Name        : Ders16.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Null Pointer, Dangling Referans ve Pointerler" << endl; // prints Null Pointer, Dangling Referans ve Pointerler

	int *ptr = nullptr; // bu pointerin bellekte herhangibir yer göstermemesini istiyoruz. buna null pointer denir
	ptr = new int; // yer ayırdık
	*ptr = 10; // değer verdik
	delete ptr; // alanı belleğe verdik ve bellek burasını kendine göre doldurabilir ve doldurur istersen kontrol et. aslında şuan pointer geçerli olmayan bir alana işaret ediyor. işte buna DANGLİNG REFERANS denir



	// eğer dangling referansa bu aşamadan sonra bir değer verirsek bilgisayarın kullandığı bir alana girmeye çalıştığımız için çalışma durdu hatası alınır
	// örneğin :
	// *ptr = 30;
	// cout << *ptr << endl;


	// bir başka hatadan bahsedelim
	int *ptr1 = nullptr;
	int *ptr2= nullptr;

	ptr1 = new int;

	*ptr1 = 20;
	ptr2 = ptr1; // ikisinin de aynı yeri göstermesini sağladık
	delete ptr1; // belleğe teslim yapıldı

	*ptr2 = 20;
	cout << *ptr2 << endl;



	return 0;
}
