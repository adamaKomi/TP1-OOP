#include "Complex.h"
#include <iostream>



Complex::Complex(double r, double i) :Re(i), Img(i){}

Complex::Complex(const Complex& C)
{
	this->Re = C.Re;
	this->Img = C.Img;
}

void Complex::Afficher() const
{
	std::cout << this->Re <<  " + " << this->Img << "i" << std::endl;
}

Complex Complex::operator+(const Complex& z) const
{
    return Complex(this->Re + z.Re, this->Img + z.Img);
}

Complex Complex::operator+(double r) const
{
    return Complex(this->Re + r, this->Img);
}

Complex Complex::operator-(const Complex& z) const
{
    return Complex(this->Re - z.Re, this->Img - z.Img);
}

Complex Complex::operator-(double r) const
{
    return Complex(this->Re - r, this->Img);
}

Complex Complex::operator*(const Complex& z) const
{
    return Complex(this->Re * z.Re - this->Img * z.Img, this->Re * z.Img + this->Img * z.Re);
}

Complex Complex::operator*(double r) const
{
    return Complex(this->Re * r, this->Img * r);
}

Complex Complex::operator/(const Complex& z)  const
{
    double denom = z.Re * z.Re + z.Img * z.Img;
    if (denom == 0) {
        std::cout << "operator/ : impossible de diviser par 0" << std::endl;
        exit;
    }
    double Re = (this->Re * z.Re + this->Img * z.Img) / denom;
    double Img = (this->Img * z.Re - this->Re * z.Img) / denom;
    
    return Complex(Re, Img);
}

Complex Complex::operator/(double r) const
{
    if (r == 0) {
        std::cout << "operator/ : impossible de diviser par 0." << std::endl;
        exit;
    }
    return Complex(this->Re / r, this->Img / r);
}

// Conjugué
void Complex::Conjugue() 
{
    this->Img = -this->Img;
}

//Le module 
double Complex::Module() const
{
    return sqrt(this->Re * this->Re + this->Img * this->Img);
}

// Argument
double Complex::Argument() const
{
    return atan2(this->Img, this->Re);
}

// Puissance 
Complex Complex::Puissance(int n) const
{
    double r = pow(this->Module(), n);
    double theta = this->Argument() * n;
    
    return Complex(r * cos(theta), r * sin(theta));
}

// Calculer l'inverse
Complex Complex::Inverse() const
{
    double denom = this->Re * this->Re + this->Img * this->Img;

    if (denom == 0) {
        std::cout << "Inverse : impossible de diviser par 0" << std::endl;
        exit;
    }
  

    return Complex(this->Re / denom, -this->Img / denom);
}

// Comparaison 
bool Complex::operator==(const Complex& z1) const
{
    return (z1.Re == this->Re) && (z1.Img == this->Img);
}

bool Complex::operator!=(const Complex& z1) const
{
    return this->Re!=z1.Re|| this->Img != z1.Img;
}

//Assignation
Complex& Complex::operator=(const Complex& z)
{
    if (this != &z) {
        this->Re = z.Re;
        this->Img = z.Img;
    }
    return *this;
}