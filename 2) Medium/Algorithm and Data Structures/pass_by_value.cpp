/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

//pass by value

#include <iostream>
using namespace std;

void swap(int a, int b){
    int tmp = a;  //yeni bir adres alır
    a = b;
    b = tmp;
}

int main(){
    int x = 10;
    int y = 20;
    cout<<"Before swap "<< x << y << endl;
    swap(x,y);
    cout<<"After swap "<< x << y;

}
