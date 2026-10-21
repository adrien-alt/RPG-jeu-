#ifndef OBJET_H
#define OBJET_H
#include "Personnage.h"
#include "Arme.h"

using namespace std;

class Objet
{
private:
    int potionVie;
    int potionAttaque;
    int quantiteDePotionVie;
    int quantiteDePotionAttaque;


public:
    Objet();
    ~Objet();
    int recupererQuantiteVie();
    int recupererQuantiteAttaque();

    void quantiteRestantVie();
    void quantiteRestantAttaque();
    void PotionVie(Personnage& personnage);
    void PotionAttaque(Personnage& personnage);
};

#endif