#ifndef HERO_H
#define HERO_H

#include <string>
#include "Personnage.h"
using namespace std;

class Hero : public Personnage
{
private:
public:
    Hero();
    ~Hero();

    void setPouvoir(int pouvoir);
};

#endif