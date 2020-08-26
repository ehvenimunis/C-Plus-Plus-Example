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

//elemanlar� yazd�r�r
template <typename T>
void yazdir(stack<T> s){ //e�er referans olarak verirsek i�indeki elemanalr u�ar
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

}

int main() {

    //kurucu metod
    stack<int> s;
    cout << endl << "s i�inde eleman var m� : "<<  s.empty() << endl;

    //eleman ekleme
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << "s i�inde eleman var m� : "<<  s.empty() << endl;
    cout << "s i�ine en son ekelen ve en ba�ta bulunan eleman : " << s.top() << endl;

    //eleman ��karma
    s.pop();
    cout << "s i�ine en son ekelen ve en ba�ta bulunan eleman : " << s.top();

    //boyut
    cout << endl << "size : " << s.size();
    cout << endl << "i�indeki elemanalar : ";
    yazdir(s);


    //kopyalama kurucusu
    stack < int > s1(s);
    cout << endl << "s1 stack i�indeki elemanalar : ";
    yazdir(s1);


    return 0;
} // main sonu
