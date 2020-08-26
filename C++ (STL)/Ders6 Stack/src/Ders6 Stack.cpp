//============================================================================
// Name        : Ders6.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

//elemanlarý yazdýrýr
template <typename T>
void yazdir(stack<T> s){ //eðer referans olarak verirsek içindeki elemanalr uçar
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

}

int main() {

    //kurucu metod
    stack<int> s;
    cout << endl << "s içinde eleman var mý : "<<  s.empty() << endl;

    //eleman ekleme
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "s içinde eleman var mý : "<<  s.empty() << endl;
    cout << "s içine en son ekelen ve en baþta bulunan eleman : " << s.top() << endl;

    //eleman çýkarma
    s.pop();
    cout << "s içine en son ekelen ve en baþta bulunan eleman : " << s.top();

    //boyut
    cout << endl << "size : " << s.size();
    cout << endl << "içindeki elemanalar : ";
    yazdir(s);


    //kopyalama kurucusu
    stack < int > s1(s);
    cout << endl << "s1 stack içindeki elemanalar : ";
    yazdir(s1);


    return 0;
} // main sonu
