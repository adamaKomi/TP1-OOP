#pragma once
#include "Point.h"
class Cercle
{
private:
	static const double PI;
	int id;
	double r;
	Point *centre;
public:
	Cercle(int id,double r , Point *p);
	void Affiche() const;
	void updateR(double dr);
	void Translate(double dx, double dy);
	double surface() const;
	double perimetre() const;
	bool operator==(const Cercle& cercle) const;
	bool appart(const Point& p);
	~Cercle();

};

