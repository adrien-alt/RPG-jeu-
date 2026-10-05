#ifndef ENNEMI_H
#define PERSONNAGE_H

#include <string>

using namespace std;

class Ennemi
{
private:
    string nom;
    int vie;
    int attaque;

public:
    Ennemi();
    ~Ennemi();

    int Attaquer();
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupPointVie();

    void setAttaque(int valeur);
    void setPointVie(int vie);
};

#endif