#include "Arme.h"
#include "objet.h"
#include <iostream>
#include <string>

using namespace std;

Arme::Arme()
{
    degatArc = 17;
    degatDague = 12;
    degatEpee = 20;
    degatMassue = 28;
}
Arme::~Arme()
{

}

//retour des attaques d'armes
int Arme::getDegatEpee()
{
    return degatEpee;
}
int Arme::getDegatArc()
{
    return degatArc;
}
int Arme::getDegatDague()
{
    return degatDague;
}
int Arme::getDegatMassue()
{
    return degatMassue;
}
//choix de l'arme
int Arme::degatArme(Personnage*degat, int choix)
{
    int degatTotaux;
    if(choix==1)
    {
        degatTotaux = degat->RecupAttaque()+degatEpee;
    }
    else if(choix == 2)
    {
        degatTotaux = degat->RecupAttaque()+degatArc;
    }
    else if(choix == 3)
    {
        degatTotaux = degat->RecupAttaque()+ degatMassue;
    }
    else if(choix == 4)
    {
        degatTotaux = degat->RecupAttaque()+degatDague;
    }
    else
    {
        cout<<"Choix invalide"<<endl;
        return -1;
    }
    return degatTotaux;
}