//============================================================================
// Name        : Ders29.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Ders29
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Static bellekte bir sefer oluşturulur daha sonra değeri onun üzerinden güncelleyebiliriz. Durağan bir değişkendir.

class Gamer{
public:
	static int gamers;

	//Constructor
	Gamer(){
		gamers++;
		cout << "Yeni oyuncu oluşturuldu" << endl;
	}
};

int Gamer::gamers = 0; // Class static değişkenine ilk değeri atandı.

int main() {
	cout << "Static Member Variables" << endl; // prints Statik Class Üyeleri

	Gamer gamer1; // obje oluşturuldu
	Gamer gamer2; // obje oluşturuldu
	Gamer gamer3; // obje oluşturuldu
	Gamer gamer4; // obje oluşturuldu

	// static değişken değerini yazdıralım
	cout << "Değişken değeri : " << Gamer::gamers << endl;
	cout << "Değişken değeri : " << gamer4.gamers << endl;

	// SONUÇ : Statik özellikler objelere özgü değil sınıflara özgüdür.



	return 0;
}
