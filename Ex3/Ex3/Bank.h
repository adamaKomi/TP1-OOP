//Bank.h
#pragma once
#include "Client.h"
#include "Transaction.h"

class Bank {

private:
    Client* clients; // Pointeur vers un tableau de clients
    int nbClients;
public:
    Bank(Client* clients, int nbClients);

    void ajoutClient(const Client& client);
    void suppClient(Client& client);
    Client* chercherClient(const std::string identifiant);
    void ajoutCompte(Client& client, const Compte& compte);
    //void suppCompte(Client& client, const std::string& identifiantCompte);
    void effectuerTrans(const Transaction& transaction);
    void saveData();
    void chargerData();

    ~Bank();
};
