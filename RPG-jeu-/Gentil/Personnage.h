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

public:
    Personnage();
    ~Personnage();
    int Capacite();
    int Attaquer();
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupPointVie();

    void setAttaque(int valeur);
    void setPointVie(int valeur);
    void setPouvoir(int pouvoir);
};

#endif