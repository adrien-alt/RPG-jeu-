#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

using namespace std;

class Personnage
{
private:
    string nom;
    int vie;
    int attaque;
    int capacite;
    int role;

public:
    Personnage();
    ~Personnage();
    int Capacite();
    int Attaquer();
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupPointVie();
    int ChangerRole();

    void setAttaque(int valeur);
    void setPointVie(int valeur);
    void setCapacite(int valeur);
    void setNom(string valeur);
    void setRole(int role);

    string RecupNom();
};

#endif