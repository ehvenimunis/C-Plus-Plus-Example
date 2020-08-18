//============================================================================
// Name        : Ders26.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{
private:
	string name;
	int salary;
public:
	// Employee constructor'u üç farklı tipte yazılınca aşırı yüklenmiş olacaktır.

	// constructor için yer ayırılınca bu fonksiyon çağırılır.
	Employee(){
		cout << "Constructor çağırıldı!" << endl;
	}

	// delete yapılınca bu destructor fonksiyonu çağırılır
	~Employee(){ // yıkıcı metod constructor için ayırılan yeri belleğe geri teslim eder
		cout << "Destructor çağırıldı!" << endl;
	}

};

int main() {
	cout << "Destructor" << endl; // yıkıcı metodlar

	Employee *employee = new Employee(); // constructor için yer ayırıldı
	delete employee; // belleğe daha önce ayırılmış bölgeyi teslim eder

	// Önemli Not : Eğer delete yapılmaz ise proram sonuna kadar bilgisayar pointer için yer tutar. Bu durum istenmez.

	return 0;
}
