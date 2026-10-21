#ifndef ARMURE_H
#define ARMURE_H
#include "../Personnage/Personnage.h"
#include <string>
using namespace std;

class Armure
{
    private:
    string nomArmure;
    int plastron;
    int jambiere;
    int casque;
    int bras;

    public:
    Armure();
    ~Armure();
    string getNomArmure();
    int getChoix();
    int getPlastron();
    int getJambiere();
    int getCasque();
    int getBras();

    int protectionArmure(Personnage*bouclier, int choix);

};
#endif