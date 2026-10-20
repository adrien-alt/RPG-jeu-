#ifndef ENNEMI_H
#define ENNEMI_H

#include "../Gentil/Personnage.h"

class Ennemi : public Personnage
{
public:
    Ennemi();
    virtual ~Ennemi();

    virtual void jouerTour(Personnage* cible);
};

#endif
