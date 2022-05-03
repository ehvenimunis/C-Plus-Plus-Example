#include <iostream>
#include <queue>
#include <list>
using namespace std;


class Insan{
protected:
    string name;
    int age;
    bool disabilityStatus;
public:
    Insan(string name, int age, bool disabilityStatus=false) : name(name), age(age), disabilityStatus(disabilityStatus){ }
    void yazdir()const {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Disability Status : ";
        if(disabilityStatus)
            cout << "Evet";
        else
            cout << "Hayır";
        cout << endl;
    }
};


class Hasta:public Insan{
    int hastaNo;
    int priorityScore;
public:

    Hasta(int hastaNo, Insan& i) : hastaNo(hastaNo), Insan(i), priorityScore(0){
        priorityScoreHesapla();
    }

    Hasta(int hastaNo, string name, int age, bool disabilityStatus = false) : hastaNo(hastaNo), Insan(name, age, disabilityStatus), priorityScore(0){
        priorityScoreHesapla();
    }

    void priorityScoreHesapla(){
        if(disabilityStatus)
            priorityScore += 30;
        if (age > 65)
            priorityScore += age - 65;
    }


    bool operator <(const Hasta& h)const {
        return priorityScore < h.priorityScore;
    }

    void yazdir()const{
        cout << "Patient No : " << hastaNo << endl;
        Insan::yazdir();
        cout << "Priority Rating : " << priorityScore << endl;
    }

};


class HastaKayit{
    list <Hasta> kayitSirasi; // hasta tipinde bir şablonu var. insanlar geldiğinde buraya kayıt olacaklar
    priority_queue < Hasta > muayeneSirasi; // öncelik durumları için bir kuyruk. varsayılan olarak küçüktür işlemi yapacaktır
public:
    //insanların kayıt olabileceği bir metod
    void kayit(Insan& i){ // parametresi insan türünden bir referans
        Hasta hasta(kayitSirasi.size() + 1, i); // hasta türünden bir nesne oluşturuyoruz ve insanı buraya argüman olarak veriyoruz. yukarıda aşırı yüklenene kurucu metodu kullanıyoruz aslında. sıra için de listenin boyutu + 1 yapıyor
        kayitSirasi.push_back(hasta);
        muayeneSirasi.push(hasta);
    }

    void kayitSirasiYazdir(){
        cout << "########### Kayıt Sırası ##################" << endl;
        if(kayitSirasi.empty())
            cout << "Kayitli hasta yok !" << endl;
        else{
            list<Hasta>::iterator iter = kayitSirasi.begin(); // hasta tipinden bir iteratör oluşturdum ve kayıt sırasının başını buraya aldık
            while (iter != kayitSirasi.end()){ // iter kayıt sırasının sonuna gelmediği müddetçe
                Hasta hasta = *iter; // hasta isminde bir tane hasta oluşturuyorum ve oluşturup içindeki elemanı aldık
                hasta.yazdir();
                iter++;
                if(iter != kayitSirasi.end())
                    cout << endl;
            }
            cout << "######### Kayıt Sırası ###################" << endl;
        }
    }

    // muayene sırası ile alakalı
    void muayeneSirasiYazdir(){
        cout << "############ Muayene Sırası Başı ###########" << endl;
        if(muayeneSirasi.empty())
            cout << "Muayene bekleyen hasta yok !" << endl;
        else{
            priority_queue < Hasta > kuyruk = muayeneSirasi;
            while(!kuyruk.empty()){
                Hasta hasta = kuyruk.top();
                hasta.yazdir();
                kuyruk.pop();
                if(!kuyruk.empty())
                    cout << endl;
            }
            cout << "########## Muayene Sırası Sonu ###########" << endl;
        }
    }

    //muayeneye hasta çağırmak için metod
    void hastaCagir(){
        if(muayeneSirasi.empty())
            cout << "Muayene için bekleyen hasta yok !!!! " << endl;
        else{
            cout << "Muayeneye çağırılan hasta bilgileri : " << endl;
            Hasta hasta = muayeneSirasi.top();
            hasta.yazdir();
            muayeneSirasi.pop();
            cout << endl;
        }
    }

};

int main() {
    /*
    Insan insan("Arif", 30); //insan nesnesi oluşturdum
    Insan insan1("Ahmet", 35, 1);
    insan.yazdir();
    insan1.yazdir();
    */

    /*
    Hasta hasta(1, "Arif", 30);
    hasta.yazdir();
    Hasta hasta2(2, "Ahmet", 70, 1);
    hasta2.yazdir();
     */

    /* // bir insanı hastaya çevirelim
     Insan insan("Arif", 30); //insan nesnesi oluşturdum
     Insan insan1("Ahmet", 35, 1);
 */
    /*Hasta h(1, insan);
    h.yazdir();
     */

    /*
    // hastayı kayıt eden sınıfı kullanalım.
    // yani artık burada hasta numarası vermiyoruz. Hasta kayıt hastalara bir numara veriyor.
    HastaKayit banko;
    banko.kayit(insan);
    banko.kayit(insan1);
    banko.kayitSirasiYazdir();
    cout << endl;
    banko.muayeneSirasiYazdir();
    banko.hastaCagir();
    banko.hastaCagir();
    banko.hastaCagir();
     */

    Insan insanlar [] = {
            Insan ("Ali", 30),
            Insan("Fatma", 80,1),
            Insan("Ferhat", 20),
            Insan("Sencer", 99,1),
            Insan("Suat", 45, 1)
    };

    HastaKayit banko;

    banko.kayit(insanlar[0]);
    banko.kayit(insanlar[1]);
    banko.kayit(insanlar[2]);
    banko.kayit(insanlar[3]);
    banko.kayit(insanlar[4]);


    banko.kayitSirasiYazdir();

    cout << endl;

    banko.muayeneSirasiYazdir();

    banko.hastaCagir();
    banko.hastaCagir();
    banko.hastaCagir();
    banko.hastaCagir();
    banko.hastaCagir();

    return 0;
}
