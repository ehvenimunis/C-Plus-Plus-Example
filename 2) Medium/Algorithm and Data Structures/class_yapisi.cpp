/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Dikdortgen{
    int en,boy; //program başladığında dışarıdan ilk değerlerini atamak için public satırının dışarısına yazdık. 
    //Dikdörtgen classının içerisinde ki her fonksiyonun içerisinde en ve boyu kullanabiliriz.
    public:
        void ata(int e,int b){
            en = e;
            boy = b;
        }
        int alan(){return en*boy;}
};

int main(){
    // X isimli bir nesne oluşturalım.
    Dikdortgen x;
    Dikdortgen y;

    // X isimli nesne içerisindeki ata fonksiyonu ile en ve boy a      
    //yeni değerler atayalım bu sayede en ve boyu her yerde kullanabilelim.
    x.ata(5,2);
    y.ata(10,20);
    // X.alan() diyerek ise dikdörtgenin en ve boyunu çarparak alanı //bulalım.
    cout<<x.alan()<<endl;   
    cout<<y.alan()<<endl;
    return 0;
}