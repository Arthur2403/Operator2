#include <iostream>
#include "Circle.h"

using namespace std;

void Circle::printCircle() {
	cout << "Radius: " << radius << "\nLenght: " << radius * 6.28 << "\nArea: " << radius * radius * 3.1415 << "\n";
}

Circle& Circle::operator+=(const double number) {
	if (radius + number < 0) {
		cout << "Sorry you can not create negative radius circle\n";
		return *this;
	}
	radius += number;
	return *this ;
}
Circle& Circle::operator-=(const double number) {
	if (radius - number < 0) {
		cout << "Sorry you can not create negative radius circle\n";
		return *this;
	}
	radius -= number;
	return *this;
}