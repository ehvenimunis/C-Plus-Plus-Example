//============================================================================
// Name        : Ders1.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>

using namespace std;

class calisan{
private:
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

int main() {
	cout << "Kalıtım" << endl; // prints Kalıtım

	// objeler
	calisan personel1("Ahmet", 5000);
	cout << personel1.toString() << endl;

	personel1.setAd("Efe");
	cout << personel1.toString() << endl;

	calisan personel2;
	cout << personel2.toString() << endl;

	return 0;
}
