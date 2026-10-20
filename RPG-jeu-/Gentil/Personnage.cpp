#include "Personnage.h"

using namespace std;

Personnage::Personnage()
{
    vie = 100;
    vieMax =100;
    attaque = 20;
    bouclier = 30;
    niveau = 1;
    experienceActuelle = 0;
    experienceMax = 100;
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
    bouclier  = bouclier - degats;
    if (bouclier < 0)
    {
        int degatsRestants = 0 - bouclier;
        bouclier = 0;
        vie = vie - degatsRestants;
        if (vie < 0)
        {
            vie = 0;
        }
        return vie;
    }
    else
    {
        return vie;
    }
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
void Personnage::setPointVieMax(int valeur)
{
    vieMax = valeur;
}
int Personnage::RecupPointVieMax()
{
    return vieMax;
}
string Personnage::RecupNom()
{
    return nom;
}
void Personnage::setNom(string valeur)
{
    nom = valeur;
}
int Personnage::ChangerRole()
{
    return role;
}
void Personnage::setRole(int valeur)
{
    role = valeur;
}
void Personnage::seSoigner(int soin)
{
    vie = vie +soin;
    if(vie > vieMax)
    {
        vie = vieMax;
    }
}
void Personnage::degatPotion(int blessure)
{
    vie= vie -blessure;
    if(vie < 0)
    {
        vie = 0;
    }
}
void Personnage::setProtection(int valeur)
{
    bouclier = valeur;
}
int Personnage:: Protection()
{
    return bouclier;
}
void Personnage::gagnerExeperience(int quantite)
{
    experienceActuelle = experienceActuelle + quantite;

    while (experienceActuelle >= experienceMax && niveau < 100)
    {

        experienceActuelle = experienceActuelle - experienceMax;

        niveau++;
        augmenterDegats(50);
        augmenterProtection(50);
        experienceMax = experienceMax + 300;
    }
}
void Personnage::augmenterDegats(int valeur)
{
    attaque+= valeur;
}
void Personnage::augmenterProtection(int valeur)
{
    bouclier += valeur;
}