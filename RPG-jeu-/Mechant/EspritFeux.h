#ifndef ESPRITFEUX_H
#define ESPRITFEUX_H

#include <string>
#include "Ennemi.h"
using namespace std;

class EspritFeux : public Ennemi
{
private:
    int capacite;
    int mana;
public:
    EspritFeux();
    ~EspritFeux();

    int Capacite();
    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif