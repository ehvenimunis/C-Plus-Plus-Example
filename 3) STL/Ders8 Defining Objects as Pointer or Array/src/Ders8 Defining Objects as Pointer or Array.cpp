//============================================================================
// Name        : Ders8.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Defining Objects as Pointer or Array
// Description : Hello World in C++, Ansi-style
//============================================================================

// https://www.youtube.com/watch?v=UDfohQsTg-o&list=PLfs1gAT4S8yIpcu7XwWliYjUGb97IZhOH&index=4



#include <iostream>
using namespace std;

class Nokta{
public:
    int x,y;
    void degerAta(int x1, int y1){
        x = x1;
        y = y1;
    }

    void ekranaYaz(){
        cout << x << "," << y << endl;
    }

    bool baslangictaMi(){
        return x == 0 && y == 0;
    }


};

int main() {
    Nokta n1;
    Nokta n2;
    Nokta* n3;
    Nokta* n4;
    n3 = &n2;
    n4 = new Nokta();




    n1.degerAta(2,10);
    n2.degerAta(0,0);

    n1.ekranaYaz();
    n2.ekranaYaz();

    if(n2.baslangictaMi()){
        cout << "n2 deðeri baþlangýçta !!" << endl;
    }

    n3 ->ekranaYaz();


    // n4
    n4 ->degerAta(100,200);
    n4 ->ekranaYaz();




    Nokta array[10];
    Nokta* parray; // bir pointer
    parray = new Nokta[10];


    //deðerlerini atayalým
    for(int i=0; i<10; i++){
        array[i].degerAta(i,i+2); // diziye deðer atama
        (parray + sizeof(Nokta) * i) ->degerAta(i+5,i+10); //pointer e deðer atamak
    }

    // deðerleri yazdýralým
    for (int i=0; i<10; i++){
        array[i].ekranaYaz();
        (parray+ sizeof(Nokta) * i) ->ekranaYaz();
        cout << endl;
    }

}
