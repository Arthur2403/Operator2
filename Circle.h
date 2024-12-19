#pragma once

class Circle {
private:
	double radius;
public:
	Circle(const double newRadius = 0) {
		setRadius(newRadius);
	}
	double getRadius() const { return radius; }
	void setRadius(const double newRadius) { if (newRadius >= 0) { radius = newRadius; } }
	double getLenght() const { return radius * 6.28; }
	double getArea() const { return radius * radius * 3.1415; }
	void printCircle();

	bool operator==(const Circle& secondCircle) { return radius == secondCircle.getRadius(); }
	bool operator>(const Circle& secondCircle) { return radius > secondCircle.getRadius(); }
	Circle& operator+=(const double number);
	Circle& operator-=(const double number);
};