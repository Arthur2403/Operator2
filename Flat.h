#pragma once

using namespace std;

class Flat {
private:
	double width;
	double lenght;
	int price;
public:

	Flat (const double newWidt = 1, const double newLenght = 1, const int newPrice = 1){
		setLenght(newLenght);
		setWidth(newWidt);
		setPrice(newPrice);
	}

	double getWidth() const { return width; }
	void setWidth(const double newWidth) { if (newWidth > 0) { width = newWidth; } }
	double getLenght() const { return lenght; }
	void setLenght(const double newLenght) { if (newLenght > 0) { lenght = newLenght; } }
	int getPrice() const { return price; }
	void setPrice(const int newPrice) { if (newPrice > 0) { price = newPrice; } }
	double getArea() { return width * lenght; }

	bool operator==(Flat& otherFlat) { return getArea() == otherFlat.getArea(); }
	Flat& operator=(Flat& otherFlat);
	bool operator>(const Flat& otherFlat) { return price > otherFlat.price; }
};