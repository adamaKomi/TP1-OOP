//Bank.cpp
#include "Bank.h"
#include <iostream>

Bank::Bank(Client* clients, int nbClients) : clients(clients), nbClients(nbClients) {
    std::cout << "Ctor Bank" << std::endl;
}

void Bank::ajoutClient(const Client& client) {
    if (this->nbClients < Max) { // Vérifier la capacité
        this->clients[this->nbClients++] = client;
    }
    else {
        std::cout << "Nombre maximum de clients atteint." << std::endl;
    }
}

void Bank::suppClient(Client& client) {
    int verif = 0; // Initialiser verif à 0
    for (int i = 0; i < this->nbClients; i++) {
        if (this->clients[i] == client) {
            verif = 1; // Marquer que le client a été trouvé
            for (int j = i; j < (this->nbClients - 1); j++) {
                this->clients[j] = this->clients[j + 1];
            }
            this->nbClients -= 1; // Décrémenter le nombre de clients
            std::cout << "Client supprimee" << std::endl;
            break; // Sortir de la boucle après la suppression
        }
    }
    if (verif == 0) {
        std::cout << "Erreur lors de la suppression du client" << std::endl;
    }
}

Client* Bank::chercherClient(const std::string identifiant) {
    for (int i = 0; i < this->nbClients; i++) {
        if (this->clients[i].compare(identifiant))
            return &this->clients[i];
    }
    return nullptr;
}

//void Bank::ajoutCompte(Client& client, const Compte& compte) {
//    client.ajouterCompte();
//}

//void Bank::suppCompte(Client& client, const std::string& idCompte)
//{
//    client.supprimerCompte();
//}

void Bank::effectuerTrans(const Transaction& transaction) {
}

void Bank::saveData() {
}

void Bank::chargerData() {
}

Bank::~Bank() {
    delete[] this->clients; // Libération correcte de la mémoire
    std::cout << "Dtor Bank" << std::endl;
}
