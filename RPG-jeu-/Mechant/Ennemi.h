#ifndef ENNEMI_H
#define ENNEMI_H
#include "../Personnage/objet.h"
#include "../Personnage/Personnage.h"

class Ennemi : public Personnage
{
public:
    Ennemi();
    virtual ~Ennemi();

    virtual void jouerTour(Personnage* cible);
};

#endif
