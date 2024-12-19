#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include "Airplane.h"

using namespace std;


Types Airplane::stringToTypes(const string& newType) {
	auto foo = stringToTypesMap.find(newType);
	if (foo == stringToTypesMap.end()) {
		cout << "Wrong type";
		return Types::Passenger;
	}
	return foo->second;
}


ostream& operator<<(ostream& out, Airplane airplane) {
	if (airplane.type == Types::Passenger) {
		out << "Airplane type: Passenger\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else if (airplane.type == Types::Transport) {
		out << "Airplane type: Transport\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else if (airplane.type == Types::Military) {
		out << "Airplane type: Military\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else if (airplane.type == Types::Postal) {
		out << "Airplane type: Postal\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else if (airplane.type == Types::Sport) {
		out << "Airplane type: Sport\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else if (airplane.type == Types::Agricultural) {
		out << "Airplane type: Agricultural\nAmount of seats: " << airplane.amountOfSeats;
		return out;
	}
	else {
		cout << "Wrond type";
		return out;
	}
}

Airplane& Airplane::operator++() {
	++amountOfSeats;
	return *this;
}

Airplane& Airplane::operator--() {
	if (amountOfSeats - 1 < 0) {
		return *this;
	}
	--amountOfSeats;
	return *this;
}