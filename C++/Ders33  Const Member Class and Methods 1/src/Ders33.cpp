//============================================================================
// Name        : Ders33.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Test{
private:
	int a;
public:
	Test(int a){
		this->a = a;
	}

	// const tipinde bir method
	int getValue() const { // bu metod herhangibir değeri değiştiremez. bu metod const olmayan metodları çağıramaz.
		// this->a = 30;    // bu satır hata verir
		return this->a;
	}
};

// const referans aldığı için bu objenin herhangibir özelliğini değiştiremeyiz
void test(const Test &test){ // test sınıfından bir refearns alıyor. eğer referans almasaydı oluşturduğumuz objeler kopyalanır bu durumda yavaşlama olur.
	cout << test.getValue() << endl; // eğer getValue() const tipinde olmasaydı çağıramazdık. çünkü değeri değiştirebilen bir fonk çağıramaz.
}

int main() {
	cout << "Const Member Class and Methods 1" << endl; // prints Const Member Class and Methods 1

	Test test1(10);
	cout << test1.getValue() << endl;

	test(test1); // metodu çağırdık
	return 0;
}
