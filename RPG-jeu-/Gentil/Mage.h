#ifndef MAGE_H
#define MAHE_H

#include <string>
#include "Personnage.h"
using namespace std;

class Mage : public Personnage
{
private:
    int mana;
public:
    Mage();
    ~Mage();

    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif