//Compte.cpp
#include "Compte.h"
#include <iostream>

Compte::Compte(std::string idCompte, double solde, std::string typeCompte):
    idCompte(idCompte), solde(solde), typeCompte(typeCompte)
{
    std::cout << "Ctor Compte" << std::endl;

}

void Compte::depot(double montant)
{
    if (montant <= 0) {
        std::cout << "Depot: montant incorrect"<<std::endl;
    }
    else {
        this->solde += montant;
        std::cout << "Depot de "<<montant << std::endl;
    }
}

void Compte::retrait(double montant)
{
    if (montant <= 0) {
        std::cout << "Retrait: montant incorrect" << std::endl;
    }
    else if (montant > this->solde) {
        std::cout << "Retrait: solde insuffisant" << std::endl;
    }
    else {
        this->solde -= montant;
        std::cout << "Retrait de " << montant << std::endl;
    }
}

void Compte::transferer(Compte& beneficiaire, double montant)
{
   if (montant > this->solde) {
        std::cout << "Transfert: solde insuffisant" << std::endl;
    }
    else {
        beneficiaire.depot(montant);
        std::cout << "Transfert de " << montant<<" au beneficiaire: "<<beneficiaire.idCompte << std::endl;
        this->solde-=montant;
    }
}

void Compte::consulterSolde() const
{
    std::cout << "Solde : "<<this->solde << std::endl;
}

void Compte::AfficherCompte() const
{
    std::cout << "IdCompte : " << this->idCompte << std::endl;
    this->consulterSolde();
}

bool Compte::operator==(const Compte& compte)
{
    return this->idCompte == compte.idCompte;
}

bool Compte::idCompare(const std::string idCompte) const
{
    return this->idCompte==idCompte;
}

Compte::~Compte()
{
    std::cout << "Dtor Compte" << std::endl;

}
