//============================================================================
// Name        : Ders11.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Bu �al��ma zaman�nda ortaya ��kan �ok �e�itlilik konu olacakt�r
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class base
{
public:
	/*
	 * Bir s�n�f�n fonksiyonunun miras alan di�er s�n�flar taraf�ndan kullan�lmas�n� sa�lamak i�in virtual anahtar kelimesiyle tan�mlar�z.
	 */
    virtual void print () //Override edilebilir fonksiyon
    { cout<< "print base class" <<endl; }

    void show ()
    { cout<< "show base class" <<endl; }
};

class derived:public base
{
public:
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    { cout<< "print derived class" <<endl; }

    void show ()
    { cout<< "show derived class" <<endl; }
};

int main() {
	cout << "Polymorphism 2" << endl; // prints Polymorphism 2

    base *bptr;
    derived d;
    bptr = &d;

    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show(); // show fonksiyonu virtual olmad��� i�in overriding i�lemi yap�lamad�.
    // kal�t�m almak i�in virtual fonk tan�mlamak laz�m!

	return 0;
}
