//============================================================================
// Name        : Ders21.cpp
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
public:

	void setName(string isim){ // privete değişkene dolaylı yoldan ulaşmak ve değerini değiştirmek için oluşturulmuş bir fonksiyon
		name = isim;
	}

	string getName(){
		return name;
	}
};

int main() {
	cout << "Private Eri�im Belirleyicisi" << endl; // prints Private Eri�im Belirleyicisi

	Employee employee;
	employee.setName("Ahmet");
	cout << endl << employee.getName();

	return 0;
}

// Not : Encapsulation kavramı ile class detaylarının mümkün olduğunca gizlenmesi anlatılır. Private değişkenler kodun ilerleyen safhalarında programın korunmasını sağlar.
// bu sayede private değerler sadece Class fonksiyonları ile erişilerek gerekli kontroller sonucu değiştirlebilir.
