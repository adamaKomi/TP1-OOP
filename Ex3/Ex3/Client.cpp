//Client.cpp
#include "Client.h"
#include <iostream>

Client::Client(std::string nom, int nbComptes) : id(nom), nbComptes(nbComptes) {
    comptes = new Compte[Max]; // Allocation du tableau de comptes
    std::cout << "Ctor Client" << std::endl;
}

void Client::AfficheClient() {
    std::cout << "IdClient : " << this->id << std::endl;
    std::cout << "Nombre comptes : " << this->nbComptes << std::endl;
    std::cout << "\n+++++++++++++ Liste des comptes ++++++++++++++" << std::endl;
    for (int i = 0; i < this->nbComptes; i++) {
        this->comptes[i].AfficherCompte();
        std::cout << "****************************" << std::endl;
    }
}

void Client::ajouterCompte(std::string idCompte, double solde, std::string typeCompte)
{
    if (this->nbComptes < Max) { // Vérifier la capacité
        this->comptes[this->nbComptes++] = Compte(idCompte, solde, typeCompte);
    }
    else {
        std::cout << "Nbre max de comptes atteint." << std::endl;
    }
}

//void Client::ajouterCompte(Compte compte) {
//    if (this->nbComptes < Max) { // Vérifier la capacité
//        this->comptes[this->nbComptes] = compte; // Correction de l'ajout
//        this->nbComptes += 1;
//    }
//    else {
//        std::cout << "Nombre maximum de comptes atteint." << std::endl;
//    }
//}

void Client::supprimerCompte(std::string id) {
    int verif = 0; // pour verifier que le compte a ete trouvé et supprimé
    for (int i = 0; i < (this->nbComptes); i++) {
        if (this->comptes[i].idCompare(id)) {
            verif = 1; // Marquer que le compte a été trouvé
            for (int j = i; j < (this->nbComptes - 1); j++) {
                this->comptes[j] = this->comptes[j + 1];
            }
            this->nbComptes -= 1; // Decrementer le nombre de comptes
            std::cout << "Compte supprimee" << std::endl;
            break; // Sortir de la boucle après la suppression
        }
    }
    if (verif == 0) {
        std::cout << "Erreur lors de la suppression de compte" << std::endl;
    }
}

bool Client::operator==(const Client& client) {
    return this->id == client.id;
}

bool Client::compare(std::string id) const {
    return this->id == id;
}

void Client::transferer(Compte& debiteur, Compte& beneficiaire, double montant)
{
    if (montant <= 0) {
        std::cout << "Transfert: montant incorrect" << std::endl;
    }
    else {
        debiteur.transferer(beneficiaire, montant);
    }
}

Client::~Client() {
    delete[] this->comptes; // Libération correcte de la mémoire
    std::cout << "Dtor Client" << std::endl;
}
