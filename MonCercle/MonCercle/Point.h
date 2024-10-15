#pragma once
class Point
{
private:
	double x;
	double y;
public:
	Point(double x = 0.0, double y = 0.0);
	void Afficher() const;
	double distance(const Point& p) const;
	void translate(double dx, double dy);
	bool operator==(const Point& p) const;

	~Point();
};

