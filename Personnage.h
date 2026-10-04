#ifndef PERSONNAGE_H
#define PERSONNAGE_H

#include <string>

using namespace std;

class Personnage
{
private:
    string nom;
    int pointVie;
    int pointMana;
    int attaque;
    int defense;
public:
    Personnage();
    ~Personnage();

    int Attaquer();
    int Soigner(int sante);
    int RecevoirDegats(int degats);
    int RecupAttaque();
    int RecupDefense();
    int RecupPointVie();
    int RecupPointMana();
    int RecevoirShiel(int protection);
    
    string AfficherStatistique();
    string getNom();

    void setNom(string nom);
    void setAttaque(int valeur);
    void setDefense(int valeurs);
    void setVie(int vie);
    void setMana(int mana);
};

#endif