//============================================================================
// Name        : Ders3.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : �zerine bindirme 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

class calisan{
protected:
	string isim;
	double para;
public:
	calisan(){
		isim = "Ali";
		para = 8965;
	}
	calisan(string ad, double ucret){
		isim = ad;
		para = ucret;
	}

	void setAd(string ad){
		isim = ad;
	}

	string getAd(){
		return isim;
	}

	void setUcret(double ucret){
		para = ucret;
	}

	double getUcret(){
		return para;
	}

	string toString(){
		stringstream abc;
		abc << isim << " : " << para;
		return abc.str();
	}

}; // Class sonu


class add : public calisan{
private:
	string number;
public:
	void setNumber(string num){
		number = num;
	}

	string getNumber(){
		return number;
	}

	string toString(){ // di�er s�n�ftaki fonksiyon ile ayn� isimi ta��yor
		stringstream a;
		a << isim << " : " << para << " : " << number;
		return a.str();
	}
};

int main() {
	cout << "Overriding " << endl; // prints Overriding 

	calisan person;
	cout << person.toString() << endl;

	add person1;
	person1.setNumber("8000");
	cout << person1.toString() << endl;

	calisan *testPerson; // i�aretci obje olu�turduk
	testPerson = &person1;
	cout << testPerson->toString() << endl; // overriding

	return 0;
}
