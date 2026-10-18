#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

using namespace std;

class Personnage
{
private:
    string nom;
    int vie;
    int vieMax;
    int attaque;
    int capacite;
    int role;
    int bouclier;

public:
    Personnage();
    ~Personnage();
    int Capacite();
    int Attaquer();
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupPointVie();
    int ChangerRole();
    int RecupPointVieMax();
    int Protection();

    void setAttaque(int valeur);
    void setPointVie(int valeur);
    void setPointVieMax(int valeur);
    void setCapacite(int valeur);
    void setNom(string valeur);
    void setRole(int role);
    void setProtection(int valeur);
    void seSoigner(int soin);
    void degatPotion(int blessure);

    string RecupNom();
};

#endif