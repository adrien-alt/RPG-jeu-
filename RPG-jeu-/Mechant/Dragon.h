
#ifndef DRAGON_H
#define DRAGON_H

#include "Ennemi.h"

class Dragon : public Ennemi
{
private:
    int capacite;
    int mana;
    int potionVie;
    int quantitePotionVie;
    bool phaseDeuxActive;

public:
    Dragon();
    ~Dragon() override;

    int Capacite();
    int Mana();

    bool phaseDeux();
    void setPouvoir(int pouvoir);
    void setMana(int power);
    void jouerTour(Personnage* cible) override;
    void passageBoss(Personnage* cible);
};
#endif
