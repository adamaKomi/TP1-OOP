//Client.h
#pragma once
#include <string>
#include "Compte.h"

const int Max = 10;
class Client {

private:
    std::string id;
    Compte* comptes; // Pointeur vers un tableau de comptes
    int nbComptes; // Nombre de comptes du client

public:
    Client(std::string id="cl0", int nbComptes = 0);
    void AfficheClient();
    void ajouterCompte(std::string idCompte = "cc0", double solde = 0.0, std::string typeCompte = "Courant");
    void supprimerCompte(std::string id);
    bool operator==(const Client& client);
    bool compare(std::string id) const;
    void transferer(Compte& debiteur, Compte& beneficiaire, double montant);
    ~Client();
};
