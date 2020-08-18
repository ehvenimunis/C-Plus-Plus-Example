//============================================================================
// Name        : Ders11.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Bu çalýþma zamanýnda ortaya çýkan çok çeþitlilik konu olacaktýr
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class base
{
public:
	/*
	 * Bir sýnýfýn fonksiyonunun miras alan diðer sýnýflar tarafýndan kullanýlmasýný saðlamak için virtual anahtar kelimesiyle tanýmlarýz.
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
    bptr->show(); // show fonksiyonu virtual olmadýðý için overriding iþlemi yapýlamadý.
    // kalýtým almak için virtual fonk tanýmlamak lazým!

	return 0;
}
