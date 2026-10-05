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

public:
    Personnage();
    ~Personnage();

    int Attaquer();
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupPointVie();

    void setAttaque(int valeur);
    void setPointVie(int vie);
};

#endif