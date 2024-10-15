#include "Complex.h"
#include <iostream>

int main()
{
    Complex z1(3, 4);   
    Complex z2(1, -2);  

    std::cout << "z1: " << std::endl;
    z1.Afficher();
    std::cout << "z2: " << std::endl;
    z2.Afficher();

    std::cout << "La somme: " << std::endl;
    Complex sum = z1 + z2;
    sum.Afficher();
    std::cout << "La somme z1+5: " << std::endl;
    Complex sum2 = z1 + 5;
    sum2.Afficher();

    std::cout << "La soustraction: " << std::endl;
    Complex sous = z1 - z2;
    sous.Afficher();
    std::cout << "La soustraction z1-3: " << std::endl;
    Complex sous2 = z1-3;
    sous2.Afficher();

    std::cout << "Conjugué: " << std::endl;
    z1.Conjugue();
    z1.Afficher();

    
    std::cout << "Module de z1: " << z1.Module() << std::endl;

    
    std::cout << "Argument de z1: " << z1.Argument() << " radians" << std::endl;

    std::cout << "La puissance de z1^2: " << std::endl;
    Complex puissance = z1.Puissance(2);
    puissance.Afficher();

    std::cout << "L'nverse de z1: " << std::endl;
    Complex inverse = z1.Inverse();
    inverse.Afficher();

    return 0;
}
