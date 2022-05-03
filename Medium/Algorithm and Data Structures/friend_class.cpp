/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

//Bir friend fonksiyon,sınıfın faaliyet alanı dışında tanımlanıp sınıfın private üyelerine erişim izni olan fonksiyondur.
//Bir fonsiyon ya da bütün bir sınıf,başka bir sınıf ile friend olabilecek şekilde tanımlanabilir.

//Arkadaşlık verilir alınmaz.
//Yani A fonksiyonunun B'nin arkadaşı olabilmesi
//için önce B'de tanımlanması gerekir.
//Arkadaşlar, bir sınıfın özel verilerine erişebilirler.

class Rectangle{
    int width,height;
    public: //accses specifer
        Rectangle(){}
        Rectangle(int x, int y): width(x), height(y){}
        int area(){return width*height;}
        friend Rectangle duplicate (const Rectangle &); //Bir fonksiyonu friend olarak bildirmek için sınıf tanımlamasındaki fonksiyon prototipinin önüne friend anahtar kelimesini koyulur.
        // & == pass by referance 
        // friend == keyword
        // Rectangle == return
        // duplicate == fonk adı
};

Rectangle duplicate(const Rectangle& param){
    Rectangle res;
    res.width=param.width*2;
    res.height=param.height*2;
    return res;
}

int main(){
    Rectangle foo;
    Rectangle bar(2,3);
    foo = duplicate(bar); //bar bir argüment
    cout<<foo.area()<<"\n";
    return 0;
}

//Önemli not : Bir fonksiyonun üyesi olmadığı bir sınıfa ait private üyelere erişim hakkı olmasını istediğimiz zamanlarda friend function kullanırız.