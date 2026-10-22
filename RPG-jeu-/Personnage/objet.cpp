#include "objet.h"
#include "Personnage.h"
#include <iostream>
#include <string>

using namespace std;

Objet::Objet(string nomObjet, int quantite)
{
    nom = nomObjet;
    this-> quantite = quantite;
    valeurPotion = 30;
}
Objet::~Objet()
{

}
void Objet::PotionVie(Personnage& personnage)
{
    personnage.seSoigner(valeurPotion);
}
void Objet::PotionAttaque(Personnage& personnage)
{
    personnage.degatPotion(valeurPotion);
}
void Objet::quantiteRestante()
{
    if (quantite > 0)
    {
        quantite--;
    }
}
int Objet::recupererQuantite() const
{
    return quantite;
}
string Objet::getnomObjet()const
{
    return nom;
}