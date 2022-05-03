//============================================================================
// Name        : Example.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

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
            cout << "Hay�r";
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
    list <Hasta> kayitSirasi; // hasta tipinde bir �ablonu var. insanlar geldi�inde buraya kay�t olacaklar
    priority_queue < Hasta > muayeneSirasi; // �ncelik durumlar� i�in bir kuyruk. varsay�lan olarak k���kt�r i�lemi yapacakt�r
public:
    //insanlar�n kay�t olabilece�i bir metod
    void kayit(Insan& i){ // parametresi insan t�r�nden bir referans
        Hasta hasta(kayitSirasi.size() + 1, i); // hasta t�r�nden bir nesne olu�turuyoruz ve insan� buraya arg�man olarak veriyoruz. yukar�da a��r� y�klenene kurucu metodu kullan�yoruz asl�nda. s�ra i�in de listenin boyutu + 1 yap�yor
        kayitSirasi.push_back(hasta);
        muayeneSirasi.push(hasta);
    }

    void kayitSirasiYazdir(){
        cout << "########### Kay�t S�ras� ##################" << endl;
        if(kayitSirasi.empty())
            cout << "Kayitli hasta yok !" << endl;
        else{
            list<Hasta>::iterator iter = kayitSirasi.begin(); // hasta tipinden bir iterat�r olu�turdum ve kay�t s�ras�n�n ba��n� buraya ald�k
            while (iter != kayitSirasi.end()){ // iter kay�t s�ras�n�n sonuna gelmedi�i m�ddet�e
                Hasta hasta = *iter; // hasta isminde bir tane hasta olu�turuyorum ve olu�turup i�indeki eleman� ald�k
                hasta.yazdir();
                iter++;
                if(iter != kayitSirasi.end())
                    cout << endl;
            }
            cout << "######### Kay�t S�ras� ###################" << endl;
        }
    }

    // muayene s�ras� ile alakal�
    void muayeneSirasiYazdir(){
        cout << "############ Muayene S�ras� Ba�� ###########" << endl;
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
            cout << "########## Muayene S�ras� Sonu ###########" << endl;
        }
    }

    //muayeneye hasta �a��rmak i�in metod
    void hastaCagir(){
        if(muayeneSirasi.empty())
            cout << "Muayene i�in bekleyen hasta yok !!!! " << endl;
        else{
            cout << "Muayeneye �a��r�lan hasta bilgileri : " << endl;
            Hasta hasta = muayeneSirasi.top();
            hasta.yazdir();
            muayeneSirasi.pop();
            cout << endl;
        }
    }

};

int main() {
    /*
    Insan insan("Arif", 30); //insan nesnesi olu�turdum
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

    /* // bir insan� hastaya �evirelim
     Insan insan("Arif", 30); //insan nesnesi olu�turdum
     Insan insan1("Ahmet", 35, 1);
 */
    /*Hasta h(1, insan);
    h.yazdir();
     */

    /*
    // hastay� kay�t eden s�n�f� kullanal�m.
    // yani art�k burada hasta numaras� vermiyoruz. Hasta kay�t hastalara bir numara veriyor.
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
