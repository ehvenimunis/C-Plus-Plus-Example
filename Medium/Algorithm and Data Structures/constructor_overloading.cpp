/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;
#define SINIF_MEVCUDU 2

//Constructor overloading örneği verildi
//İçerisinde iki adet yapıcı fonksiyon bulunuyor. Birincisi boş ve bir işlem yapmıyor. 
//İkincisi int ve string olarak parametre gönderildiğinde çalışacak olanıdır.

class Eleman{
    int no;
    string isim;
    
    public:
        Eleman(){}; // Birinci yapıcı fonksiyonum
        Eleman(int,string); // İkinci yapıcı fonksiyonum
        
        void noAta(int _no){no = _no;}
        int noAl(){return no;}
        void isimAta(string _isim){isim = _isim;}
        string isimAl(){return isim;}
        void yaz(){
            cout<<"isim"<<isim<<"No"<<no;
        }
};

// Constructor'ı çalıştıralım
Eleman::Eleman(int i, string s):no(i),isim(s){};

int main(){
    // Yapıcı fonksiyonu boş olan bir nesne oluşturalım ad e1 olsun.
    Eleman e1;
    // Yapıcı fonksiyonu dolu olan ve atama işlemi yapan bir nesne oluşturalım adı e2 olsun.
    // Otomatik olarak değerler dolar.
    Eleman e2(123,"Ali");
    
    // Değişkenlerimizi bilgi toplamak için oluşturalım.
    int no;
    string isim;
    
    // Bilgileri klavyeden çekelim.
    cout<<"Elemanın numara ve ismini giriniz.";
    cin>>no>>isim;
    
    // E1 nesnesi içerisindeki noAta methodunu çalıştırarak nesnenin içerisindeki no bilgisini dolduralım.
    e1.noAta(no);
    // Aynı şekilde isim bilgisinide dolduralım.
    e1.isimAta(isim);
    
    e1.yaz();
    e2.yaz();
    return 0;
}

//  Overloading yaparak aslında şunu belirtmiş olduk. 
// Nesne oluşturulduğunda otomatik benim verdiğim değerler ile ..
// .. işlemi başlat dersek içi boş constructor çalıştırılacak tersi durumda mesela içerisine ..
// .. 2 adet parametre gönderileceği zamanda ise öteki constructor çalıştırılacaktır.