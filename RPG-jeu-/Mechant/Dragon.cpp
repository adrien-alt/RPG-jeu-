
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
    setCapacite(300);

    potionVie = 30;
    quantitePotionVie = 3;
    phaseDeuxActive = false;
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

    if (RecupPointVie() < 700 && quantitePotionVie > 0)
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
bool Dragon::phaseDeux()
{
    return RecupPointVie() < 500 && quantitePotionVie > 0 && !phaseDeuxActive ;
}
void Dragon::passageBoss(Personnage* cible)
{
    int degats;
    if(phaseDeux())
    {
        phaseDeuxActive = true;
        seSoigner(potionVie);
        degats = Capacite();
        cible ->RecevoirDegats(degats);
        seSoigner(potionVie);
        quantitePotionVie--;
        cout<<"Le dragon passe dans sa deuxième phases"<<endl;
        if(cible->RecupPointVie() == 0)
        {
            cout<<"Le hero et mort"<<endl;
            return;
        }
    }   
    else if (phaseDeuxActive)
    {
        degats = Capacite();
        cible->RecevoirDegats(degats);
        if(cible->RecupPointVie() == 0)
        {
            cout<<"Le hero et mort"<<endl;
            return;
        }
        degats = Attaquer();
        cible->RecevoirDegats(degats);
        if(cible->RecupPointVie() == 0)
        {
            cout<<"Le hero et mort"<<endl;
            return;
        }
    }
    else
    {
        degats = Attaquer();
        cible-> RecevoirDegats(degats);
        if(cible->RecupPointVie() == 0)
        {
            cout<<"Le hero et mort"<<endl;
            return;
        }
    }
}
    