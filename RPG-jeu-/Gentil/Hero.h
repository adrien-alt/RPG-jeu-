#ifndef HERO_H
#define HERO_H

#include <string>
#include "Personnage.h"
using namespace std;

class Hero : public Personnage
{
private:
    int niveau;
    int experienceActuelle;
    int experienceMax; 
public:
    Hero();
    ~Hero();

};

#endif