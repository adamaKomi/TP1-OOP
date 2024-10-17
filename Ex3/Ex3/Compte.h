//Compte.h
#pragma once
#include <string>

class Compte {

private:
    std::string idCompte;
    double solde;
    std::string typeCompte;
public:
    Compte(std::string idCompte="cc0", double solde = 0.0, std::string typeCompte = "Courant");
    void depot(double montant);
    void retrait(double montant);
    void transferer(Compte& beneficiare, double montant);
    void consulterSolde() const;
    void AfficherCompte() const;
    bool operator==(const Compte& compte);
    bool idCompare(const std::string idCompte) const;

    ~Compte();
};
