#pragma once

using namespace std;

enum class TypesOfCoats {
	Raincoat,
	Peacoat,
	Trenchcoat,
	DoubleBreastedcoat,
	Polocoat,
};

map<string, TypesOfCoats> stringToTypesOfCoatsMap{
	{"Raincoat", TypesOfCoats::Raincoat},
	{"Peacoat", TypesOfCoats::Peacoat},
	{"Trenchcoat", TypesOfCoats::Trenchcoat},
	{"DoubleBreastedCoats", TypesOfCoats::DoubleBreastedcoat},
	{"Polocoat", TypesOfCoats::Polocoat},
};

class Coat {
private:
	TypesOfCoats typeOfCoat;
	double price;
public:
	Coat(const string& newType = "Polocoat", const double newPrice = 1) {
		setType(newType);
		setPrice(newPrice);
	}
	double getPrice() const { return price; }
	void setPrice(const double newPrice) { if (newPrice > 0) { price = newPrice; } }
	TypesOfCoats getType() const { return typeOfCoat; }
	void setType(const string& newType) { typeOfCoat = stringToTypesOfCoats(newType); }
	TypesOfCoats stringToTypesOfCoats(const string& newType);


	bool operator==(const Coat& secondCoat) { return typeOfCoat == secondCoat.getType(); }
	Coat& operator=(const Coat& secondCoat);
	bool operator>(const Coat& secondCoat);
	
	friend ostream& operator<<(ostream& out, Coat coat);
};