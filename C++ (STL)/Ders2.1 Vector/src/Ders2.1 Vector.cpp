//============================================================================
// Name        : 1.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

//bir fonksiyon tan�mlayal�m
template <typename T>
void yazdir(vector<T>& v){
    // tipini kendisi �al��ma esnas�nda bulsun diye "typename" yazd�k
    typename vector<T>::iterator i = v.begin(); //ba�lang�� adresi al�n�r iterat�r vas�tas�yla
    while (i != v.end())
        cout << *i++ << " ";
    cout << endl;
}


int main() {
    vector<int> v6;
    v6.insert(v6.begin(),2); //vekt�r�n ba��na 5 ekle
    v6.insert(v6.end(),3); //sonuna 10 ekle
    v6.insert(v6.begin(),1); //tekrar ba�a 2 ekle
    yazdir(v6);
    cout<<"�imdi sonuna farkl� bir �ekilde eleman ekleyelim : ";
    v6.push_back(4);
    yazdir(v6);
    cout<<"sondaki elman� ��karal�m : ";
    v6.pop_back();
    yazdir(v6);
    cout<<endl<<"i�inde eleman olup olmad���na bakal�m : ";
    cout<<v6.empty(); //vekt�r�n i�i dolu mu bo� mu? dolu ise 0 d�ner

    cout << endl << "en ba�taki eleman : "<< *v6.begin();
    cout << endl << "en sondaki eleman : "<< *v6.end();
    //farkl� bir yolla daha yazd�ral�m
    cout << endl << "en ba�taki eleman : "<< v6.front();
    cout << endl << "en sondaki eleman : "<< v6.back();
    cout << endl << "i�indeki elemanlar� silelim";
    v6.erase(v6.begin()+1,v6.end()-1);
    cout << endl << "ba�taki ve sondaki eleman hari� silindi : " ;
    yazdir(v6);

    //v6.clear(); -> tamam�n� siler



    // kurucu metod
    vector<int> v7;
    for(int i=0; i<10; i++)
        v7.push_back(i*2);
    cout << "yeni bir vekt�r elemanlar� : ";
    yazdir(v7);

    cout << "v6 ba��na eleman ekleyelim : ";
    v6.insert(v6.begin(), &v7[0], &v7[5]);
    yazdir(v6);
    cout << "v6 sondan bir �ncesine eleman ekleyelim : ";
    v6.insert(v6.end()-1, &v7[0], &v7[5]);
    yazdir(v6);

    // farkl� bir kurucu metod
    vector<int> v8(&v7[3], &v7[8]);
    cout << endl << "v8 vekt�r�n�n elemanlar� : ";
    yazdir(v8);

    //takas i�lemi
    v7.swap(v8);
    cout << "takas i�lemi sonras� v7 vekt�r� : ";
    yazdir(v7);
    cout << "takas i�lemi sonras� v8 vekt�r� : ";
    yazdir(v8);

    //vekt�r boyutu ve kapasitesi
    cout << endl << "v7 boyutu : " << v7.size();
    cout << endl << "v7 kapasitesi : " << v7.capacity();
    cout << endl << "e�er v7'ye eleman eklersek kapasitesi dinamik olarak artar!";

    return 0;
}
