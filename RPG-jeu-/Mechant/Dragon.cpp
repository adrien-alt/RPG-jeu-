#include "Dragon.h"

using namespace std;

Dragon::Dragon()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
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