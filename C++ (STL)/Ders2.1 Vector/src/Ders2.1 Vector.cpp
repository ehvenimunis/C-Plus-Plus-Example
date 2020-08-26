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

//bir fonksiyon tanýmlayalým
template <typename T>
void yazdir(vector<T>& v){
    // tipini kendisi çalýþma esnasýnda bulsun diye "typename" yazdýk
    typename vector<T>::iterator i = v.begin(); //baþlangýç adresi alýnýr iteratör vasýtasýyla
    while (i != v.end())
        cout << *i++ << " ";
    cout << endl;
}


int main() {
    vector<int> v6;
    v6.insert(v6.begin(),2); //vektörün baþýna 5 ekle
    v6.insert(v6.end(),3); //sonuna 10 ekle
    v6.insert(v6.begin(),1); //tekrar baþa 2 ekle
    yazdir(v6);
    cout<<"þimdi sonuna farklý bir þekilde eleman ekleyelim : ";
    v6.push_back(4);
    yazdir(v6);
    cout<<"sondaki elmaný çýkaralým : ";
    v6.pop_back();
    yazdir(v6);
    cout<<endl<<"içinde eleman olup olmadýðýna bakalým : ";
    cout<<v6.empty(); //vektörün içi dolu mu boþ mu? dolu ise 0 döner

    cout << endl << "en baþtaki eleman : "<< *v6.begin();
    cout << endl << "en sondaki eleman : "<< *v6.end();
    //farklý bir yolla daha yazdýralým
    cout << endl << "en baþtaki eleman : "<< v6.front();
    cout << endl << "en sondaki eleman : "<< v6.back();
    cout << endl << "içindeki elemanlarý silelim";
    v6.erase(v6.begin()+1,v6.end()-1);
    cout << endl << "baþtaki ve sondaki eleman hariç silindi : " ;
    yazdir(v6);

    //v6.clear(); -> tamamýný siler



    // kurucu metod
    vector<int> v7;
    for(int i=0; i<10; i++)
        v7.push_back(i*2);
    cout << "yeni bir vektör elemanlarý : ";
    yazdir(v7);

    cout << "v6 baþýna eleman ekleyelim : ";
    v6.insert(v6.begin(), &v7[0], &v7[5]);
    yazdir(v6);
    cout << "v6 sondan bir öncesine eleman ekleyelim : ";
    v6.insert(v6.end()-1, &v7[0], &v7[5]);
    yazdir(v6);

    // farklý bir kurucu metod
    vector<int> v8(&v7[3], &v7[8]);
    cout << endl << "v8 vektörünün elemanlarý : ";
    yazdir(v8);

    //takas iþlemi
    v7.swap(v8);
    cout << "takas iþlemi sonrasý v7 vektörü : ";
    yazdir(v7);
    cout << "takas iþlemi sonrasý v8 vektörü : ";
    yazdir(v8);

    //vektör boyutu ve kapasitesi
    cout << endl << "v7 boyutu : " << v7.size();
    cout << endl << "v7 kapasitesi : " << v7.capacity();
    cout << endl << "eðer v7'ye eleman eklersek kapasitesi dinamik olarak artar!";

    return 0;
}
