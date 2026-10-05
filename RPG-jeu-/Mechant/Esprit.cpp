#include "Esprit.h"

using namespace std;

Esprit::Esprit()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
}
Esprit::~Esprit()
{
}
int Esprit::Capacite()
{
    return capacite;
}
void Esprit::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int Esprit::Mana()
{
    return mana;
}
void Esprit::setMana(int power)
{
    mana = power;
}