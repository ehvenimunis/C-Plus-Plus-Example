//============================================================================
// Name        : Ders9.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Deque
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <deque>
#include <vector>

using namespace std;
template <typename T>
void yazdir(T& t){
    typename T::iterator iter = t.begin();
    while (iter != t.end())
        cout << *iter++ << " ";
    cout << endl;
}
int main(){

    //kurucu metod
    deque<int> d;
    cout << "i�i bo� mu : " << d.empty() << endl;
    d.push_back(7); // kuyru sonuna eleman ekler
    d.push_back(8);
    d.push_back(9);
    d.push_front(6); // en ba�a eleman ekler
    cout << "i�i bo� mu : " << d.empty() << endl;
    cout << "ilk elman� : " << d.front() << endl;
    cout << "son eleman� : " << d.back() << endl;
    cout << "b�t�n elemanlar : ";
    yazdir(d);

    //sondan ��karma i�lemi
    d.pop_back();
    cout << "sondan ��karma sonras� : ";
    yazdir(d);

    // ba�tan ��karma
    d.pop_front();
    cout << "ba�tan ��karma sonras� : ";
    yazdir(d);

    // tamam�n� sileme metodu
    d.clear();
    cout << "silme i�lemi snras� i�i bo� mu : " << d.empty() << endl;


    //pozisyon vererek eleman ekleme
    cout << "insert ile eleman eklemek" << endl;
    d.insert(d.begin(),5);
    yazdir(d);
    d.insert(d.end(),6);
    yazdir(d);

    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << "Vektor : " ;
    yazdir(v);


    // �imdi vekt�r elemnlar�n� kuyru�a ekleyelim
    d.insert(d.begin(), &v[0], &v[4]);
    // d.insert(d.begin() + 1, &v[0], &v[3]);
    cout << "ekleme sonras� kuyruk elemanlari : ";
    yazdir(d);

    // aral�kl� silme
    d.erase(d.begin() + 3 , d.end() - 1);
    yazdir(d);
    cout << "kuyruktaki eleman say�s� : " << d.size() << endl;

    // yeniden boyutland�rma i�lemi
    d.resize(2); //daral�r
    cout << endl << endl << "Boyutland�rma sonras� kalan elemanlar : ";
    yazdir(d);

    d.resize(5); // geni�ler
    // en sona 0 yerine 9 elaman�n� ekler
    // d.resize(10,9);
    cout << "Boyutland�rma sonras� gelen elemanlar : ";
    yazdir(d);
    cout << "kuyruktaki eleman say�s� : " << d.size() << endl;


    // farkl� kurucu metodlar
    deque<int> d2(d); // kopyalama kurucusu
    yazdir(d2);
    deque<int> d3(5,7);
    yazdir(d3);
    deque<int> d4(&d2[2], &d2[7]);
    yazdir(d2);
}
