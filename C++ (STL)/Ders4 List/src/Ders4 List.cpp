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

//bir fonksiyon tanýmlayalým
template <typename T>
void yazdir(T& v){
    // tipini kendisi çalýþma esnasýnda bulsun diye "typename" yazdýk
    typename T::iterator i = v.begin(); //baþlangýç adresi alýnýr iteratör vasýtasýyla
    while (i != v.end())
        cout << *i++ << " ";
    cout << endl;
}


int main() {

    // list için kurucu metodlarý yazalým
    list<int> e;
    list<int> e1(5,6);
    list<int> e2(10);
    list<int> e3(e2.begin(), e2.end());
    list<int> e4(e1); // kopyalama kurucusu

    yazdir(e); // boþluk yazdýrýsr
    yazdir(e1);
    yazdir(e2);
    yazdir(e3);
    yazdir(e4);

    // içi boþ mu?
    if (e.empty() == 1)
        cout << "e listesi içinde eleman yok!" << endl;
    if (e1.empty() == 0)
        cout << "e1 listesi içinde eleman var ve sayýsý : " << e1.size() << endl;

    // elemanlara eriþelim
    cout << "e1 listesinin en baþtaki elemaný : " << e1.front() << endl;
    cout << "e3 listesinin en sondaki elemaný : " << e3.back();

    // temizleme
    e2.clear();
    yazdir(e2); // boþluk yazdýrýr
    if (e2.empty() == 1)
        cout << "e2 listesi içinde eleman var ve sayýsý : " << e2.size() << endl;


    //eleman ekleme
    e2.insert(e2.begin(),1);
    e2.insert(e2.end(),2);
    e2.insert(e2.end(),3);
    e2.push_back(4);
    e2.push_front(0);
    yazdir(e2);
    //e2.erase(e2.begin(), e2.end()); // silindi
    yazdir(e2); // boþluk yazdýrýr


    cout << "remove komutu kullanýmý" << endl;
    e3.push_front(5);
    e3.push_back(8);
    yazdir(e3);
    e3.remove(0); // listedeki tüm 0 deðerlerini siler
    cout << "listedeki sýfýrlar silindi" << endl;
    yazdir(e3);


    cout << endl <<"listeleri birleiþtirme " << endl;
    e3.splice(e3.begin(),e1); // e3 baþýna e1 eklendi
    yazdir(e3);
    cout << "e3 yeni boyutu : " << e3.size() << endl ;
    yazdir(e4);
    e3.merge(e4); // rastgele ekler
    yazdir(e3);



    cout << endl << "benzersiz iþlemi " << endl;
    yazdir(e3);
    e3.sort();
    cout << "sýralanmýþ hali : ";
    yazdir(e3);
    e3.unique(); // benzersiz iþlemi
    cout << "benzersiz iþlemi sonrasý e3 : ";
    yazdir(e3); // benersiz iþlemi en baþtan sona kadar komþu indisleri biribiri ile karþýlaþtýrýr. birbirine eþit olan indislerden birini siler

    return 0;
} // main sonu
