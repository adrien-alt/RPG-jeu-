#ifndef ARME_H
#define ARME_H
#include "../Personnage/Personnage.h"
#include <string>
using namespace std;

class Arme
{
    private:
    string nomArme;
    int degatEpee;
    int degatMassue;
    int degatArc;
    int degatDague;

    public:
    Arme();
    ~Arme();
    string getNomArme();
    int getChoix();
    int getDegatEpee();
    int getDegatMassue();
    int getDegatArc();
    int getDegatDague();

    int degatArme(Personnage*degat, int choix);

};
#endif