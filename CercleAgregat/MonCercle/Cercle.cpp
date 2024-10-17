#include "Cercle.h"
#include <iostream>

const double Cercle::PI = 3.14;


Cercle::Cercle(int id, double r, Point *p): id(id), r(r)
{
	this->centre = new Point(*p);
	std::cout << "Ctor cercle" << std::endl;
}

void Cercle::Affiche() const
{
	std::cout << "id : " << this->id << std::endl;
	std::cout << "rayon : " << this->r << std::endl;
	std::cout << "centre : " << std::endl;
	this->centre->Afficher();
}

void Cercle::updateR(double dr)
{
	this->r += dr;
}

void Cercle::Translate(double dx, double dy)
{
	this->centre->translate(dx,dy);
}

double Cercle::surface() const
{
	return PI * pow(this->r, 2);
}

double Cercle::perimetre() const
{
	return 2*PI*this->r;
}

bool Cercle::operator==(const Cercle& c) const
{
	return (this->r == c.r) && (this->centre->distance(*c.centre) == 0);
}

bool Cercle::appart(const Point& p)
{
	return this->centre->distance(p)<=this->r;
}

Cercle::~Cercle()
{
	delete this->centre;
	std::cout << "Dtor cercle" << std::endl;
}


