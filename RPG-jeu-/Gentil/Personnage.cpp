#include "Personnage.h"

using namespace std;

Personnage::Personnage()
{
    vie = 100;
    attaque = 20;
}
Personnage::~Personnage()
{
}
int Personnage::Attaquer()
{
    return attaque;
}
int Personnage::RecevoirDegats(int degats)
{
    vie = vie - degats;
    if (vie < 0)
    {
        vie = 0;
    }
    return vie;
}
int Personnage::RecupAttaque()
{
    return attaque;
}
int Personnage::RecupPointVie()
{
    return vie;
}
void Personnage::setAttaque(int valeur)
{
    attaque = valeur;
}
int Personnage::Capacite()
{
    return capacite;
}
void Personnage::setCapacite(int valeur)
{
    capacite = valeur;
}
void Personnage::setPointVie(int valeur)
{
    vie = valeur;
}
string Personnage::RecupNom()
{
    return nom;
}
void Personnage::setNom(string valeur)
{
    nom = valeur;
}