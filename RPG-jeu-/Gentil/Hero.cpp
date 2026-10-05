#include "Hero.h"

using namespace std;

Hero::Hero()
{
    setAttaque(20);
    setPointVie(100);
}
Hero::~Hero()
{
}
int Hero::Capacite()
{
    return capacite;
}
void Hero::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}