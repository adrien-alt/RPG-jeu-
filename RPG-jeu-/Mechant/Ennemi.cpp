#include "Ennemi.h"

Ennemi::Ennemi()
{

}

Ennemi::~Ennemi()
{
}
void Ennemi::jouerTour(Personnage*cible)
{
    int degats = Attaquer();
    cible->RecevoirDegats(degats);
}