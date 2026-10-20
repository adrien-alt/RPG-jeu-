#include "Ennemi.h"

Ennemi::Ennemi()
{
    setPointVie(150);
    setAttaque(20);
}

Ennemi::~Ennemi()
{
}
void Ennemi::jouerTour(Personnage*cible)
{
    int degats = Attaquer();
    cible->RecevoirDegats(degats);
}