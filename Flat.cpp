#include <iostream>
#include "Flat.h"

using namespace std;

Flat& Flat::operator=(Flat& otherFlat) {
	if (this == &otherFlat) {
		return *this;
	}
	width = otherFlat.width;
	lenght = otherFlat.lenght;
	price = otherFlat.price;
	return *this;
}