#ifndef GUERRIER_H
#define GUERRIER_H

#include <string>
#include "Personnage.h"
using namespace std;

class Guerrier : public Personnage
{
public:
    Guerrier();
    ~Guerrier();

    int Attaquer(int attaque);
    int Defendre(int defense);

};

#endif