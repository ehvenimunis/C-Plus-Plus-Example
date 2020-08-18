/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Mother{
    public:
        Mother()
            {cout<<"Mother : no parameters \n";}

        Mother(int a)
            {cout<<"Mother : int parameters \n";}
};

class Daughter:Mother{
    public:
        Daughter(int a)         // eğer buraya " :Mother(a) " yazarsam Mother integer parametre almış olur
            {cout<<"Daughter int parameter \n";}
};

class Son:public Mother{
    public:
        Son(int a):Mother(a)
            {cout<<"Son : int parameter \n";}
};

int main(){
    Daughter kelly(0);
    Son bud(0);
    return 0;

}

