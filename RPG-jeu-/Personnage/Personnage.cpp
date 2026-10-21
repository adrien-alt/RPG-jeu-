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

//attaque 
int Personnage::Attaquer()
{
    return attaque;
}
int Personnage::RecupAttaque()
{
    return attaque;
}
void Personnage::setAttaque(int valeur)
{
    attaque = valeur;
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

//capacite du personnage
int Personnage::Capacite()
{
    return capacite;
}
void Personnage::setCapacite(int valeur)
{
    capacite = valeur;
}

//vie max du joueur
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
int Personnage::RecupPointVie()
{
    return vie;
}

//nom du perso
string Personnage::RecupNom()
{
    return nom;
}
void Personnage::setNom(string valeur)
{
    nom = valeur;
}

//role personnage
int Personnage::ChangerRole()
{
    return role;
}
void Personnage::setRole(int valeur)
{
    role = valeur;
}

//potion vie
void Personnage::seSoigner(int soin)
{
    vie = vie +soin;
    if(vie > vieMax)
    {
        vie = vieMax;
    }
}

//potion degat
void Personnage::degatPotion(int blessure)
{
    vie= vie -blessure;
    if(vie < 0)
    {
        vie = 0;
    }
}

//protection
void Personnage::setProtection(int valeur)
{
    bouclier = valeur;
}
int Personnage:: Protection()
{
    return bouclier;
}

//gagner xp
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