/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 2

//Constructor overloading örneği verildi
//Bir Fonksiyonda Bir Nesneyi Döndürme Durumu

class Bir{
    int x;
    float y;
    // Yapıcı fonksiyonları oluşturalım.
    public:
        Bir(int _x, float _y):x(_x),y(_y){} // İkinci yapıcı fonksiyon
        Bir(){} // Birinci yapıcı fonksiyon
};

// Bir fonksiyon oluşturdum ve overloading yapılmış olan fonksiyonu burada içerisinde return olarak döndürdüm.
Bir fon(){
    return Bir(1,2.5);
}

// Dikkat etmeniz gereken nokta şudur. Aynı tipte bir nesne başka bir nesneye atanırsa,
// bu nesnenin tüm üyeleri ikinci nesnenin üyelerine otomatik olarak atanır.

int main(){
    // İçerisinde değer atanmamış olan x ve y yi oluşturdum. 2 . Yapıcı fonksiyon çalıştırıldı.
    Bir nsn;
    
    // Yukarıda ki kurala göre  "fon" fonksiyonun döndürmüş olduğu nesne değerleri "nsn" nesnesine atanır.
    nsn = fon();
    
    return 0;
}