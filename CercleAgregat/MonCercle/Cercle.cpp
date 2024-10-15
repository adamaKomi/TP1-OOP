#include "Cercle.h"
#include <iostream>

const double Cercle::PI = 3.14;


Cercle::Cercle(int id, double r, Point *p): id(id), r(r)
{
	this->c = new Point(*p);
	std::cout << "Ctor cercle" << std::endl;
}

void Cercle::Affiche() const
{
	std::cout << "id : " << this->id << std::endl;
	std::cout << "rayon : " << this->r << std::endl;
	std::cout << "centre : " << std::endl;
	this->c->Afficher();
}

void Cercle::updateR(double dr)
{
	this->r += dr;
}

void Cercle::Translate(double dx, double dy)
{
	this->c->translate(dx,dy);
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
	return (this->r == c.r) && (this->c->distance(*c.c) == 0);
}

bool Cercle::appart(const Point& p)
{
	return this->c->distance(p)<=this->r;
}

Cercle::~Cercle()
{
	delete this->c;
	std::cout << "Dtor cercle" << std::endl;
}


