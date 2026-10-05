#include "Sorcier.h"

using namespace std;

Sorcier::Sorcier()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
}
Sorcier::~Sorcier()
{
}
int Sorcier::Capacite()
{
    return capacite;
}
void Sorcier::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int Sorcier::Mana()
{
    return mana;
}
void Sorcier::setMana(int power)
{
    mana = power;
}