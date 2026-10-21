#ifndef MAGE_H
#define MAGE_H

#include <string>
#include "../Personnage/Personnage.h"
using namespace std;

class Mage : public Personnage
{
private:
    int mana;
public:
    Mage();
    ~Mage();

    int Mana();

    void setMana(int power);

};

#endif