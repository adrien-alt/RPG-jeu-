#include "Ennemi.h"

using namespace std;

Ennemi::Ennemi()
{
    vie = 100;
    attaque = 20;
}
Ennemi::~Ennemi()
{
}
int Ennemi::Attaquer()
{
    return attaque;
}
int Ennemi::RecevoirDegats(int degats)
{
    vie = vie - degats;
    if(vie < 0)
    {
        vie = 0;
    }
    return vie;
}
int Ennemi::RecupAttaque()
{
    return attaque;
}
int Ennemi::RecupPointVie()
{
    return vie;
}
void Ennemi::setAttaque(int valeur)
{
    attaque = valeur;
}