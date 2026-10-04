#ifndef OBJET_H
#define OBJET_H

#include <string>

using namespace std;

class Objet
{
private:
    string nom;
    int valeur;

public:
    Objet();
    ~Objet();

    void setNom(string nom);
    string getNom();

    void setValeur(int valeur);
    int getValeur();

    string AfficherObjet();
};

#endif