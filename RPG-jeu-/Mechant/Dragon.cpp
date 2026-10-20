
#include "Dragon.h"
#include <iostream>

using namespace std;

Dragon::Dragon()
{
    setAttaque(150);
    setPointVie(1000);
    setPointVieMax(1000);
    setPouvoir(300);
    setMana(300);
    setProtection(500);

    potionVie = 30;
    quantitePotionVie = 3;
}

Dragon::~Dragon()
{
}

int Dragon::Capacite()
{
    return capacite;
}

void Dragon::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}

int Dragon::Mana()
{
    return mana;
}

void Dragon::setMana(int power)
{
    mana = power;
}

void Dragon::jouerTour(Personnage* cible)
{
    int degats;

    if (RecupPointVie() < 300 && quantitePotionVie > 0)
    {
        seSoigner(potionVie);
        quantitePotionVie--;

        cout << "Le Dragon utilise une potion de vie !" << endl;
    }
    else if (cible->RecupPointVie() < 500)
    {
        degats = Capacite();
        cible->RecevoirDegats(degats);

        cout << "Le Dragon utilise sa capacite !" << endl;
    }
    else
    {
        degats = Attaquer();
        cible->RecevoirDegats(degats);

        cout << "Le Dragon attaque !" << endl;
    }
}
