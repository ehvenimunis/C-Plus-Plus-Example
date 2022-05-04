//============================================================================
// Name        : Ders6.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
using namespace std;

/*
 * Class template yaparken; s�n�f� yazmaya ba�lamadan �nce, template <class T > ifadesi yaz�l�r.
 * Template yazd���m�z s�n�f� ilk kulland���m�z yerde, o s�n�f bizim i�in compiler taraf�ndan yaz�l�r.
 */

template <class Tur>
class Sayi {
public:
  Tur deger1, deger2;
  Sayi(Tur d1, Tur d2) {
    this->deger1 = d1;
    (*this).deger2 = d2;
  }
  Tur topla();
};

template <class Tur>
Tur Sayi<Tur>::topla() {
    return this->deger1 + this->deger2;
};

int main() {
  cout << "Template Class" << endl; // prints Template Class

  Sayi<int> tamSayi(11, 22);
  Sayi<double> kesirliSayi(22.3, 43.1);

  cout << tamSayi.topla() << endl;

  cout << kesirliSayi.topla() << endl;

  return 0;
}
