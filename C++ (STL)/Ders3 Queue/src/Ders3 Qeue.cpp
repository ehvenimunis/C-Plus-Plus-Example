//============================================================================
// Name        : Ders3.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
using namespace std;

// kuyru�un elemanlar�n� yazd�r�r
template <typename T>
void kuyruk_yazdir(queue<T> q){  // e�er burada referans�n� verirsek yani & i�areti eklenirse kuruktaki elemanlar� ger�ekten atm�� oluruz
    while (!q.empty()){
        cout << q.front() << "";
        q.pop();
    }
    cout << endl;
}
int main() {

    //kuyruk olu�tural�m
    queue<int> q;

    cout << "kuyruk bo� mu dolu mu : " << q.empty();
    q.push(1);
    q.push(2);
    q.push(3); // �� elman eklendi
    cout << endl << "kuyruk bo� mu dolu mu : " << q.empty();
    cout << endl << "kuyru�un en ba�� : " << q.front();
    cout << endl << "kuyru�un en sonu : " << q.back();
    cout << endl << "kuyru�un boyutu : " << q.size();


    cout << endl << endl;
    kuyruk_yazdir(q);

    //eleman ��karma
    q.pop(); // en sondan elman ��kar�r
    kuyruk_yazdir(q);
    cout << endl << "kuyru�un yeni boyutu : " << q.size();
    cout << endl << "kuyru�un en ba�� : " << q.front(); // D�KKAT ilk gireni ��kard�!!!

    // kurucu metod ile kopayalama
    queue<int> q1 (q);
    cout << endl << "yeni kuyru�un en ba�� : " << q1.front();
    cout << endl << "yeni kuyru�un en sonu : " << q1.back();

    //kuytuk elemanlar�n� yazd�ral�m
    cout << endl;
    kuyruk_yazdir(q);
    kuyruk_yazdir(q1);

    return 0;
} // main sonu

