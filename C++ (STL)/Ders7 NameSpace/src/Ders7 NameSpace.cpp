//============================================================================
// Name        : Ders7.cpp
// Author      : Muhammed Salih Aydogan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


namespace programci1{
    int x=30;
    void function1(){
        int x = 31;
        cout << x << endl;
    }
}

namespace programci2{
    int x = 32;
    void function2(){
        int x = 33;
        cout << x << endl;
    }
}


int main() {
    cout << programci1::x << endl;
    programci1::function1();
    cout << programci2::x << endl;
    programci2::function2();

    return 0;
}
