#include "Mage.h"

using namespace std;

Mage::Mage()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
}
Mage::~Mage()
{
}
int Mage::Capacite()
{
    return capacite;
}
void Mage::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int Mage::Mana()
{
    return mana;
}
void Mage::setMana(int power)
{
    mana = power;
}