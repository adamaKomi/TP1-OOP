#include <iostream>
#include "Point.h"
#include "Cercle.h"

int main()
{
    Point *p1 = new Point(2.0, 3.0);

    Cercle* c1 = new Cercle(1, 2, p1);
    Cercle* c2 = new Cercle(2, 2, p1);
    Cercle c3(3, 4, p1);

    std::cout << "\n" << std::endl;
    std::cout << "c1 : " << std::endl;

    c1->Affiche();

    if (*c1 == *c2) {
        std::cout << "\nc1 et c2 sont egaux" << std::endl;
    }
    else {
        std::cout << "\nc1 et c2 sont differents" << std::endl;
    }

    if (*c1 == c3) {
        std::cout << "\nc1 et c3 sont egaux" << std::endl;
    }
    else {
        std::cout << "\nc1 et c3 sont differents" << std::endl;
    }

    std::cout << "\n" << std::endl;
    //translate c2   +(1.0, 2.0)
    std::cout << "c2 avant translation : " << std::endl;
    c2->Affiche();
    c2->Translate(1.0, 2.0);
    std::cout << "c2 apres translation +(1.0, 2.0): " << std::endl;
    c2->Affiche();
    std::cout << "\n" << std::endl;

    delete p1;
    delete c1;
    delete c2;

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.