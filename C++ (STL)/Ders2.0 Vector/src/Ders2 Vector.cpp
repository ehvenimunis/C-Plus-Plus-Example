//============================================================================
// Name        : Ders2.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

/*
int kare(int deger){
    return deger*deger;
}
*/

//bir fonksiyon tan�mlayal�m
template <typename T>
void yazdir(vector<T>& v){
    // tipini kendisi �al��ma esnas�nda bulsun diye "typename" yazd�k
    typename vector<T>::iterator i = v.begin(); //ba�lang�� adresi al�n�r iterat�r vas�tas�yla
    while (i != v.end())
        cout << *i++;
    cout << endl;
}

int main() {
    vector<int>v;
    vector<int>v1(5,10); //be� adet 10 var
    vector<int>v2(10); //10 tane 0 var
    vector<int>v3(&v2[5],&v2[8]);
    vector<int>v4(v1);

    //tan�ml� fonksiyonu kullanal�m
    yazdir(v); //i�i bo�tur
    yazdir(v1);
    yazdir(v2);
    yazdir(v3); //burada ise v3 vekt�r�n�n �� elman� yazd�r�ld�
    yazdir(v4); //kopyalama yap�ld� asl�nda

    return 0;
}

