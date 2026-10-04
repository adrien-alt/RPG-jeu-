#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "Personnage.h"

using namespace std;

class Mage : public Personnage
{
public:
    Mage();
    ~Mage();

    int Attaquer(int attaque);
    int Defendre(int defense);
};

#endif
