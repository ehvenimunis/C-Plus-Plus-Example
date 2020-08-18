/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 2

class Basit{
int i;
float f;
public:
    // Sadece prototip olarak yaz�p b�rakt�k.
    Basit(int, float);
    // Deger fonksiyonu ile ekrana ��kt�y� bast�rd�k.
    void deger() { cout << i << f; };
};

// 1. Y�ntem: Nesne olu�turuldu�unda de�erlere atama yapt�k.
Basit::Basit(int a, float b) :i(a), f(b) {}

// 2. Y�ntem : Hatta ilk atama ile i�eriye de�er de yazabiliriz.
Basit::Basit(int a, float b) : i(a), float(b) {
    cout << "Buras� ilk ekrana bast�r�lacak alan";
}

// 3.Y�ntem: Uzun yol
Basit::Basit(int a, float b) {
    i = a;
    f = b;
}; 

int main() {
    Basit nsn(1, 2.5);
    nsn.deger();
    return 0;
}