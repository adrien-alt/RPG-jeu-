#include "Ennemi.h"

using namespace std;

Ennemi::Ennemi()
{
    pv = 100;
    attaque = 20;
    defense = 10;
}
Ennemi::~Ennemi()
{
}
int Ennemi::Attaquer(int degat)
{
    degat = attaque;
    return degat;
}
int Ennemi::RecevoirDegats(int degats)
{
    pv = pv - degats;
    if(pv < 0)
    {
        pv = 0;
    }
    return pv;
}
