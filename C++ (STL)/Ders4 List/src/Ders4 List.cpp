//============================================================================
// Name        : Ders4.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <list>>
using namespace std;

//bir fonksiyon tan�mlayal�m
template <typename T>
void yazdir(T& v){
    // tipini kendisi �al��ma esnas�nda bulsun diye "typename" yazd�k
    typename T::iterator i = v.begin(); //ba�lang�� adresi al�n�r iterat�r vas�tas�yla
    while (i != v.end())
        cout << *i++ << " ";
    cout << endl;
}


int main() {

    // list i�in kurucu metodlar� yazal�m
    list<int> e;
    list<int> e1(5,6);
    list<int> e2(10);
    list<int> e3(e2.begin(), e2.end());
    list<int> e4(e1); // kopyalama kurucusu

    yazdir(e); // bo�luk yazd�r�sr
    yazdir(e1);
    yazdir(e2);
    yazdir(e3);
    yazdir(e4);

    // i�i bo� mu?
    if (e.empty() == 1)
        cout << "e listesi i�inde eleman yok!" << endl;
    if (e1.empty() == 0)
        cout << "e1 listesi i�inde eleman var ve say�s� : " << e1.size() << endl;

    // elemanlara eri�elim
    cout << "e1 listesinin en ba�taki eleman� : " << e1.front() << endl;
    cout << "e3 listesinin en sondaki eleman� : " << e3.back();

    // temizleme
    e2.clear();
    yazdir(e2); // bo�luk yazd�r�r
    if (e2.empty() == 1)
        cout << "e2 listesi i�inde eleman var ve say�s� : " << e2.size() << endl;


    //eleman ekleme
    e2.insert(e2.begin(),1);
    e2.insert(e2.end(),2);
    e2.insert(e2.end(),3);
    e2.push_back(4);
    e2.push_front(0);
    yazdir(e2);
    //e2.erase(e2.begin(), e2.end()); // silindi
    yazdir(e2); // bo�luk yazd�r�r


    cout << "remove komutu kullan�m�" << endl;
    e3.push_front(5);
    e3.push_back(8);
    yazdir(e3);
    e3.remove(0); // listedeki t�m 0 de�erlerini siler
    cout << "listedeki s�f�rlar silindi" << endl;
    yazdir(e3);


    cout << endl <<"listeleri birlei�tirme " << endl;
    e3.splice(e3.begin(),e1); // e3 ba��na e1 eklendi
    yazdir(e3);
    cout << "e3 yeni boyutu : " << e3.size() << endl ;
    yazdir(e4);
    e3.merge(e4); // rastgele ekler
    yazdir(e3);



    cout << endl << "benzersiz i�lemi " << endl;
    yazdir(e3);
    e3.sort();
    cout << "s�ralanm�� hali : ";
    yazdir(e3);
    e3.unique(); // benzersiz i�lemi
    cout << "benzersiz i�lemi sonras� e3 : ";
    yazdir(e3); // benersiz i�lemi en ba�tan sona kadar kom�u indisleri biribiri ile kar��la�t�r�r. birbirine e�it olan indislerden birini siler

    return 0;
} // main sonu
