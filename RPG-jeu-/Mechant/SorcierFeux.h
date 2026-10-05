#ifndef SORCIERFEUX_H
#define SORCIERFEUX_H

#include <string>
#include "Ennemi.h"
using namespace std;

class SorcierFeux : public Ennemi
{
private:
    int capacite;
    int mana;
public:
    SorcierFeux();
    ~SorcierFeux();

    int Capacite();
    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif