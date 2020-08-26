//============================================================================
// Name        : Ders5.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <queue>
#include <stdlib.h>
#include <time.h>


using namespace std;

//elemanlarý yazdýrýr (þablon tipli bir metod)
template <typename T>
void yazdir(T t){
    while (!t.empty())
    {
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;

}

//karþýlaþtýrma yapar
template <typename T>
bool cmp(T x, T y){
    return x > y;
}

int main() {

    srand(time(0));

    //kurucu metod
    priority_queue<int> p; //varsayýlan olarak küçüktür iþlemi yapar
    cout << "içi boþ mu : " << p.empty() << endl;
    p.push(1);
    yazdir(p);
    p.push(5);
    yazdir(p);
    p.push(4);
    yazdir(p);
    p.push(3);
    yazdir(p);
    p.push(0);
    yazdir(p); //sýrayla deðil önceliðe göre yerleþtirecektir
    p.push(6);
    yazdir(p);
    cout << "içi boþ mu : " << p.empty() << endl;
    cout << "en baþtaki elemaný : " << p.top() << endl;

    // yeni kurucu metod (her zaman küçükler en baþta olsun istedik)
    priority_queue <int, vector<int>, bool(*)(int,int)> p2(cmp);
    p2.push(1);
    yazdir(p2);
    p2.push(5);
    yazdir(p2);
    p2.push(4);
    yazdir(p2);
    p2.push(3);
    yazdir(p2);
    p2.push(0);
    yazdir(p2); //sýrayla deðil önceliðe göre yerleþtirecektir
    p2.push(6);
    yazdir(p2);

    //rasgele sayýlarý öncelikli kuyruða almak için kullanalým
    vector <int> v;
    int rast;
    cout << endl << "üretilen rasgele sayýlar : ";
    for(int i=0; i<10; i++){
        rast = rand() % 100; // 0 dana yüze kadar sayý üret
        cout << rast << " ";
        v.push_back(rast); // üretilen sayý vektör içine gönderilir
    }


    // büyükten küçüðe
    cout << endl << "p3 kuyruðunun son hali  : ";
    priority_queue<int> p3(v.begin(), v.end());
    cout << endl;
    yazdir(p3);

    // küçükten büyüðe
    priority_queue<int, vector <int>, bool(*)(int, int)> p4(v.begin(), v.end(), cmp);
    cout << endl;
    yazdir(p4);

    return 0;
} // main sonu
