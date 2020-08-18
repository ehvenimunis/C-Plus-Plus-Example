/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Dikdortgen{
    // Class'ın global değişkenlerini tanımladık.
    int en,boy;
    public:
        // Class ile aynı isimli Constructor'ı oluşturuyoruz.
        // Constructor fonksiyonu, nesne oluşturulduğunda ilk çalışacak fonksiyondur. 
        // Class ile aynı isimde olmak zorundadır. Constructor herhangi bir tipte değildir.
        Dikdortgen(int e,int b){
            en = e;
            boy = b;
        }
        // Global değişkenlerle alanı hesaplayacak fonksiyon.
        int alan(){
            return en*boy;
        }
};

int main(){
    // Nesneyi başlatalım.
    Dikdortgen x(5,10);
    // X nesnenesinin alanını hesaplayalım.
    cout << x.alan()<<endl;
    return 0;
}