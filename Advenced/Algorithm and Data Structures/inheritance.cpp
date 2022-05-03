/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

//inheritance örneğidir

class Polygon{          //base class
    protected:
        int width, height;
    public:
        void set_values(int a, int b)
        {width=a, height=b;}
};

class Rectangle:public Polygon{     //türetilmiş class
    public:
        int area(){return width*height;}
};

class Triangle:public Polygon{      //türetilmiş class
    public:
        int area(){return width*height/2;}
};

int main(){
    Rectangle rect;
    Triangle trgl;
    rect.set_values(4,5); //sonuç 20 
    trgl.set_values(4,5); //sonuç 10 
    cout<<rect.area()<<endl;
    cout<<trgl.area();
}

