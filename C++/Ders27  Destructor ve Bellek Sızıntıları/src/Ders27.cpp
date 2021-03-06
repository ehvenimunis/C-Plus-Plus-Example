//============================================================================
// Name        : Ders27.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders1
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Employee{

public:
	string *name; // pointer
	int *salary; // pointer

	// constructor için yer ayırılınca bu fonksiyon çağırılır.
	Employee(string n, int s){
		cout << "Constructor çağırıldı!" << endl;

		// yer ayırma işlemleri
		name = new string;
		salary = new int;

		// ilk değer atama işlemleri için pointerin gösterdiği yere erişerek atama yapılır
		*name = n;
		*salary = s;
	}

	// delete yapılınca bu destructor fonksiyonu çağırılır
	~Employee(){ // yıkıcı metod constructor için ayırılan yeri belleğe geri teslim eder
		cout << "Destructor çağırıldı!" << endl;
	}

	// Bilgileri ekrana bastırır
	void showInfos(){
		cout << "Name :" << *name << "Salary : " << *salary << endl;
	}

};

int main() {
	cout << "Destructor ve Bellek Sızıntıları " << endl; // prints Destructor ve Bellek Sızıntıları

	// Employee tipinde pointer oluşturuyorum ve contructor çalıştırıyorum
	Employee *emp = new Employee("Muhammed Salih Aydoğan", 5000); // objeler ve pointer için yer ayırmış olduk
	emp->showInfos();

	delete emp; // yıkıcı metod çağırıldı ve obje silindi. ancak pointerler hala yer tutmaya devam eder.

	/* Not : Eğer bu şekilde obje silindikten sonra pointerler yer tutmaya devam ederse bu duruma BELLEK SIZINTISI denir.
	   Bu durumun çözümü class içerisindeki yıkıcı metod'da pointerlerin tuttuğu yerleri serbest bıraktırmaktır.
	   Örn:

	   	~Employee(){ // yıkıcı metod constructor için ayırılan yeri belleğe geri teslim eder
	   		delete name; // pointerin tuttuğu yerler belleğe verilir
	   		delete salary;
			cout << "Destructor çağırıldı!" << endl;
		}
	*/

	return 0;
}
