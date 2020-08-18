/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Square; //deklare
class Rectangle{
    int width, height;
    public:
        int area(){return width*height;}
        void convert(Square a);
};

class Square{
    friend class Rectangle;
    private:
        int side;
    public:
        Square(int a):side(a){}
};

void Reactangle::convert(Square a){
    width = a.side;
    height = a.side;
};

int main(){
    Rectangle rect;
    Square sqr(4);
    rect.convert(sqr);
    cout<<rect.area();
}

