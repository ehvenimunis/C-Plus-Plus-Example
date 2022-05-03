/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

//pass by referance

#include <iostream>
using namespace std;


template < class T > class mypair // "mypair" sınıfın adı
{
   T values[2];
   public:
    mypair (T first, T second){     // "mypair" bir constructor
        values[0] = first;
        values[1]= second;
    }
};

template < class T > class mypair 
{
   T a,b;
   public:
    mypair (T first, T second){     // "mypair" bir constructor
        a = first;
        b= second;
        T getMax();
    }
};

template < class T > T mypair < T >::getMax()//ensondaki T harfi getmax fonsiyonun kullandığı paremetrelerin aynı zamanda class paremetresi olduğunu söyler
{
   T retual;
   retual = a>b ? a:b;
   return retual;

}

int main(){
    mypair<int>myt (100,72);
    cout<<myt.getMax();
}
