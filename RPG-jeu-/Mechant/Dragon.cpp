#include "Dragon.h"

using namespace std;

Dragon::Dragon()
{
    setAttaque(150);
    setPointVie(1000);
    setPouvoir(300);
    setMana(300);
    setProtection(500);
}
Dragon::~Dragon()
{
}
int Dragon::Capacite()
{
    return capacite;
}
void Dragon::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int Dragon::Mana()
{
    return mana;
}
void Dragon::setMana(int power)
{
    mana = power;
}
