#include "Personnage.h"
#include <random>

using namespace std;

Personnage::Personnage()
{
    pointVie = 100;
    pointMana = 100;
    attaque = 20;
    defense = 10;
}
Personnage::~Personnage()
{

}


int Personnage::Attaquer()
{
    return attaque;
}
int Personnage::Soigner(int sante)
{
    pointVie = pointVie + sante;
    if(pointVie > 100)
    {
        pointVie = 100;
    }
    return pointVie;
}
int Personnage::RecevoirDegats(int degats)
{
    pointVie = pointVie - degats;
    if(pointVie < 0)
    {
        pointVie = 0;
    }
    return pointVie;
}
int Personnage::RecupAttaque()
{
    return attaque;
}
int Personnage::RecupDefense()
{
    return defense;
}
int Personnage::RecupPointMana()
{
    return pointMana;
}
int Personnage::RecupPointVie()
{
    return pointVie;
}
int Personnage::RecevoirShiel(int degatsEnnemi)
{
    int degatsReels = degatsEnnemi - defense;
    if(degatsReels < 0)
    {
        degatsReels = 0;
    }
    return degatsReels;
}
void Personnage::setAttaque(int valeur)
{
    attaque = valeur;
}
void Personnage::setDefense(int valeurs)
{
    defense = valeurs;
}
void Personnage::setMana(int mana)
{
    pointMana = mana;
}
void Personnage::setVie(int vie)
{
    pointVie = vie;
}