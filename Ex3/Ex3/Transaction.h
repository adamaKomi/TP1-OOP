//Transaction.h
#pragma once
#include "Compte.h"

class Transaction {
private:
    Compte* comptes; // Pointeur vers un tableau de pointeurs de Comptes impliques
    int nbCompte;//nbre de comptes impliques
};

