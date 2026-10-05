#include "EspritFeux.h"

using namespace std;

EspritFeux::EspritFeux()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
}
EspritFeux::~EspritFeux()
{
}
int EspritFeux::Capacite()
{
    return capacite;
}
void EspritFeux::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int EspritFeux::Mana()
{
    return mana;
}
void EspritFeux::setMana(int power)
{
    mana = power;
}