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

//elemanlar� yazd�r�r (�ablon tipli bir metod)
template <typename T>
void yazdir(T t){
    while (!t.empty())
    {
        cout << t.top() << " ";
        t.pop();
    }
    cout << endl;

}

//kar��la�t�rma yapar
template <typename T>
bool cmp(T x, T y){
    return x > y;
}

int main() {

    srand(time(0));

    //kurucu metod
    priority_queue<int> p; //varsay�lan olarak k���kt�r i�lemi yapar
    cout << "i�i bo� mu : " << p.empty() << endl;
    p.push(1);
    yazdir(p);
    p.push(5);
    yazdir(p);
    p.push(4);
    yazdir(p);
    p.push(3);
    yazdir(p);
    p.push(0);
    yazdir(p); //s�rayla de�il �nceli�e g�re yerle�tirecektir
    p.push(6);
    yazdir(p);
    cout << "i�i bo� mu : " << p.empty() << endl;
    cout << "en ba�taki eleman� : " << p.top() << endl;

    // yeni kurucu metod (her zaman k���kler en ba�ta olsun istedik)
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
    yazdir(p2); //s�rayla de�il �nceli�e g�re yerle�tirecektir
    p2.push(6);
    yazdir(p2);

    //rasgele say�lar� �ncelikli kuyru�a almak i�in kullanal�m
    vector <int> v;
    int rast;
    cout << endl << "�retilen rasgele say�lar : ";
    for(int i=0; i<10; i++){
        rast = rand() % 100; // 0 dana y�ze kadar say� �ret
        cout << rast << " ";
        v.push_back(rast); // �retilen say� vekt�r i�ine g�nderilir
    }


    // b�y�kten k����e
    cout << endl << "p3 kuyru�unun son hali  : ";
    priority_queue<int> p3(v.begin(), v.end());
    cout << endl;
    yazdir(p3);

    // k���kten b�y��e
    priority_queue<int, vector <int>, bool(*)(int, int)> p4(v.begin(), v.end(), cmp);
    cout << endl;
    yazdir(p4);

    return 0;
} // main sonu
