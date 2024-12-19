#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include "Overcoats.h"

TypesOfCoats Coat::stringToTypesOfCoats(const string& newtypeOfCoat) {
	auto foo = stringToTypesOfCoatsMap.find(newtypeOfCoat);
	if (foo == stringToTypesOfCoatsMap.end()) {
		cout << "Wrong typeOfCoat";
		return TypesOfCoats::Polocoat;
	}
	return foo->second;
}


ostream& operator<<(ostream& out, Coat airplane) {
	if (airplane.typeOfCoat == TypesOfCoats::Raincoat) {
		out << "Type of coat: Raincout\nPrice: " << airplane.price << "$\n";
		return out;
	}
	else if (airplane.typeOfCoat == TypesOfCoats::Peacoat) {
		out << "Type of coat: Peacout\nPrice: " << airplane.price << "$\n";
		return out;
	}
	else if (airplane.typeOfCoat == TypesOfCoats::Trenchcoat) {
		out << "Type of coat: Trenchcoat\nPrice: " << airplane.price << "$\n";
		return out;
	}
	else if (airplane.typeOfCoat == TypesOfCoats::DoubleBreastedcoat) {
		out << "Type of coat: Double Breast coat\nPrice: " << airplane.price << "$\n";
		return out;
	}
	else if (airplane.typeOfCoat == TypesOfCoats::Polocoat) {
		out << "Type of coat: Polocoat\nPrice: " << airplane.price << "$\n";
		return out;
	}
	else {
		cout << "Wrond type of cout";
		return out;
	}
}

Coat& Coat::operator=(const Coat& secondCoat) {
	if (this == &secondCoat) {
		return *this;
	}

	typeOfCoat = secondCoat.typeOfCoat;
	price = secondCoat.price;
	return *this;
}

bool Coat::operator>(const Coat& secondCoat) {
	if (typeOfCoat != secondCoat.typeOfCoat) {
		return false;
	}
	return price > secondCoat.price;
}