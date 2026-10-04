#ifndef ENNEMI_H
#define ENNEMI_H

#include <string>

using namespace std;

class Ennemi
{
private:
    string nom;
    int pv;
    int attaque;
    int defense;
public:
    Ennemi();
    ~Ennemi();

    int Attaquer(int degat);
    int RecevoirDegats(int degats);
    int PointVie();
    string AfficherStatistique();

    void setNom(string nom);
    string getNom();
};

#endif