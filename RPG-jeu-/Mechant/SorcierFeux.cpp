#include "SorcierFeux.h"

using namespace std;

SorcierFeux::SorcierFeux()
{
    setAttaque(15);
    setPointVie(110);
    setMana(200);
}
SorcierFeux::~SorcierFeux()
{
}
int SorcierFeux::Capacite()
{
    return capacite;
}
void SorcierFeux::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}
int SorcierFeux::Mana()
{
    return mana;
}
void SorcierFeux::setMana(int power)
{
    mana = power;
}