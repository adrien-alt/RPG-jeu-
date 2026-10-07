#include "Mage.h"

using namespace std;

Mage::Mage()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
    setCapacite(150);
    setNom("Mage");
}
Mage::~Mage()
{
}
int Mage::Mana()
{
    return mana;
}
void Mage::setMana(int power)
{
    mana = power;
}