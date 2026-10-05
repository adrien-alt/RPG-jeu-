#ifndef HERO_H
#define HERO_H

#include <string>
#include "Personnage.h"
using namespace std;

class Hero : public Personnage
{
private:
    int capacite;
public:
    Hero();
    ~Hero();

    int Capacite();
    
    void setPouvoir(int pouvoir);

};

#endif