#pragma once

using namespace std;

enum class Types {
	Passenger,
	Transport,
	Postal,
	Agricultural,
	Sport,
	Military,
};

map<string, Types> stringToTypesMap{
	{"Passenger", Types::Passenger},
	{"Transport", Types::Transport},
	{"Postal", Types::Postal},
	{"Agricultural", Types::Agricultural},
	{"Sport", Types::Sport},
	{"Military", Types::Military},
};

class Airplane {
private:
	Types type;
	int amountOfSeats;
public:
	Airplane(const string& newType = "Passanger", const int newAmountOfSeats) {
		setType(newType);
		setAmountOfSeats(newAmountOfSeats);
	}
	int getAmountOfSeats() const { return amountOfSeats; }
	void setAmountOfSeats(const int newAmountOfSeats) { if (newAmountOfSeats > 0) { amountOfSeats = newAmountOfSeats; } }
	Types getType() const { return type; }
	void setType(const string& newType) { type = stringToTypes(newType); }
	Types stringToTypes(const string& newType);


	bool operator==(const Airplane& secondAirplane) { return type == secondAirplane.getType(); }
	Airplane& operator++();
	Airplane& operator--();
	bool operator>(const Airplane& secondAirplane) { return amountOfSeats > secondAirplane.getAmountOfSeats(); }

	friend ostream& operator<<(ostream& out, Airplane airplane);
};
