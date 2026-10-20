
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

public:
    Dragon();
    ~Dragon() override;

    int Capacite();
    int Mana();

    void setPouvoir(int pouvoir);
    void setMana(int power);

    void jouerTour(Personnage* cible) override;
};
#endif
