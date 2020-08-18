/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 2

//Constructor ile hızlı yolla ilk değer atama işlemine dair aşağıda örnek verilmiştir.

class Basit{
    int i;
    float f;
    public:
        // Sadece prototip olarak yazıp bıraktık.
        Basit(int, float);
        // Deger fonksiyonu ile ekrana çıktıyı bastırdık.
        void deger(){cout<<i<<endl<<f;};
};

// 1. Yöntem: Nesne oluşturulduğunda değerlere atama yaptık.
Basit::Basit(int a,float b):i(a),f(b){}


/*
// 2. Yöntem : Hatta ilk atama ile içeriye değer de yazabiliriz.
Basit::Basit(int a, float b):i(a),float(b){
    cout << "Burası ilk ekrana bastırılacak alan";
}// 3.Yöntem: Uzun yol
Basit::Basit(int a, float b){
    i = a;
    f = b;
};

*/

int main(){
    Basit nsn(1,2.5);
    nsn.deger();
    return 0;
}