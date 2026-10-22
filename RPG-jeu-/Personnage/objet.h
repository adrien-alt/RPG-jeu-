#ifndef OBJET_H
#define OBJET_H
#include "Personnage.h"
#include "Arme.h"
#include <string>
using namespace std;

class Objet
{
private:
    int valeurPotion;
    int quantite;
    string nom;


public:
    Objet(string nomObjet, int quantite);
    ~Objet();
    int recupererQuantite()const;

    void quantiteRestante();
    void PotionVie(Personnage& personnage);
    void PotionAttaque(Personnage& personnage);

    string getnomObjet()const;
};

#endif