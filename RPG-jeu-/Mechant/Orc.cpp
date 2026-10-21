#include "Orc.h"

using namespace std;

Orc::Orc()
{
    setAttaque(15);
    setPointVie(110);
    setPouvoir(50);
    setProtection(60);
    setCapacite(70);
}
Orc::~Orc()
{
}
int Orc::Capacite()
{
    return capacite;
}
void Orc::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}

void Orc::jouerTour(Personnage* cible)
{
    int degats;

    if (cible->RecupPointVie() < 75)
    {
        degats = Capacite();
    }
    else
    {
        degats = Attaquer();
    }

    cible->RecevoirDegats(degats);
}
    