#pragma once
#include <cmath>


class Complex
{
private:
    double Re;
    double Img;
public:
    Complex(double r=0.0, double i=0.0);
    Complex(const Complex&);
    void Afficher() const;


    Complex operator+(const Complex& z) const;
    Complex operator+(double r) const;

    Complex operator-(const Complex& z) const;
    Complex operator-(double r) const;

    Complex operator*(const Complex& z) const;
    Complex operator*(double r) const;

    Complex operator/(const Complex& z) const;
    Complex operator/(double r) const;

    void Conjugue();      
    double Module() const;         
    double Argument() const;      
    Complex Puissance(int n) const;
    Complex Inverse() const ;       

    // Fonctions pour comparaison
  bool operator==(const Complex& z1) const;
  bool operator!=(const Complex& z1) const;

    Complex& operator=(const Complex& z);
};
