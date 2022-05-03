/*
Author: Muhammed Salih Aydoğan 
Date : 07/03/2020
*/

#include <iostream>
using namespace std;

class Rectangle {
	int width, weight;
public:
	void set_values(int a, int b);
	int area();
};

void Rectangle::set_values(int a, int b) {
	width = a;
	weight = b;
}

int Rectangle::area() {
	return (width * weight);
}

int main() {
	Rectangle dikdortgen;
	dikdortgen.set_values(4, 5);
	cout << "Alan : " << dikdortgen.area();
}