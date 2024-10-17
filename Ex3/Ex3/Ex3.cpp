#include <iostream>
#include "Client.h"
#include "Bank.h"

int main()
{
    // Création de comptes
    /*Compte comp1("cc1", 100.0);
    Compte comp2("cc2", 200.0);
    Compte comp3("cc3", 300.0);*/

    // Création de clients
    Client* client1 = new Client("Client_A");
    Client* client2 = new Client("Client_B");

    // Ajout de comptes au client 1
    client1->ajouterCompte("cc1", 100.0);
    client1->ajouterCompte("cc2", 200.0);
    client1->AfficheClient();  

    // Ajout de comptes au client 2
    client2->ajouterCompte("cc3", 300.0);
    client2->AfficheClient();  

    //// Test de transfert entre comptes
    //std::cout << "Transfert de 50 " << std::endl;
    //comp1.transferer(comp2, 50);


    //// Affichage des comptes après transfert
    //client1->AfficheClient();

    //// Suppression d'un compte
    //client1->supprimerCompte(comp2);
    //std::cout << "Après suppression du compte cc2:" << std::endl;
    //client1->AfficheClient();  // Vérifier que le compte cc2 a été supprimé

    //// Création d'une banque et ajout de clients
    //Client* clients = new Client[Max];  // Allouer un tableau de clients
    //Bank bank(clients, 0);
    //bank.ajoutClient(*client1);
    //bank.ajoutClient(*client2);

    //// Recherche d'un client
    //Client* foundClient = bank.chercherClient("Client_A");
    //if (foundClient) {
    //    std::cout << "Client trouvé: " << foundClient->compare("Client_A") << std::endl;
    //}
    //else {
    //    std::cout << "Client non trouvé." << std::endl;
    //}

    // Libération de la mémoire
    delete client1;
    delete client2;
    //delete[] clients;  // Libération du tableau de clients

    return 0;
}
