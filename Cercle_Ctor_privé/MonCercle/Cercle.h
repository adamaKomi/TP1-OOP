#pragma once
#include "Point.h"
class Cercle
{
private:
	static const double PI;
	int id;
	double r;
	Point c;
	//constructeur priv�
	Cercle(int id,double r , Point p);
	//m�thode statique pour cr�er des instances
public:
	static Cercle creationCercle(int id, double r, Point p);
	void Affiche() const;
	void updateR(double dr);
	void Translate(double dx, double dy);
	double surface() const;
	double perimetre() const;
	bool operator==(Cercle& c) const;
	bool appart(const Point& p);
	~Cercle();

};

