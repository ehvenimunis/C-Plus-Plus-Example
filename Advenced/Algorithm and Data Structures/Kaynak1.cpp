/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Rectangle {
	int width, weight;
public:
	Rectangle (int a, int b) : width(a), weight(b){}
	int area() { return (width * weight); }
};




int main() {
	Rectangle rect(3,4);
	cout << "Alan : " << rect.area();
}