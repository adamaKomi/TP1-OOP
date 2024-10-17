#include "Point.h"
#include <iostream>
#include <cmath>

Point::Point(double x, double y): x(x), y(y)
{
	std::cout << "Ctor point" << std::endl;
}

void Point::Afficher() const
{
	std::cout << "x : " << this->x << "\ny : " << this->y << std::endl;
}

double Point::distance(const Point& p) const
{
	return sqrt(pow(this->x - p.x, 2) + pow(this->y - p.y, 2));
	
}

void Point::translate(double dx, double dy)
{
	this->x += dx;
	this->y += dy;
}

bool Point::operator==(const Point& p) const
{
	return this->x==p.x && this->y==p.y;
}

Point::~Point()
{
	std::cout << "Dtor point" << std::endl;
}
