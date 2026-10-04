#include "Objet.h"

using namespace std;


Objet::Objet()
{
}
Objet::~Objet()
{
}
string Objet::getNom()
{
    return nom;
}
void Objet::setNom(string nom)
{
    this->nom = nom;
}
void Objet::setValeur(int valeur)
{
    this ->valeur = valeur;
}
int Objet:: getValeur()
{
    return valeur;
}