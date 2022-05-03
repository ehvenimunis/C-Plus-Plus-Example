/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
#include <string>

using namespace std;

class deneme {
    friend void arkadasfonksiyon(deneme &, int);
    private :
        int x;

    public :

            deneme():x(0) {   }

            void print(){
            cout << x << endl;
            }

};

void arkadasfonksiyon(deneme &c ,int val)
{
    c.x=val;
}

int main()
{
    deneme testobje;
    cout << "deneme classındaki x :  (ilk deger)  " <<endl;
    testobje.print() ;
    arkadasfonksiyon(testobje,50); //!! deneme class'ı ile alacagımız degiskeni yazdik.
    cout << "deneme classındaki x : (arkadas'dan sonra)   :   " <<endl;
    testobje.print();
}