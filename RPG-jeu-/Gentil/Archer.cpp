#include "Archer.h"

using namespace std;

Archer::Archer()
{
    setAttaque(25);
    setPointVie(100);
}
Archer::~Archer()
{
}
int Archer::Capacite()
{
    return capacite;
}
void Archer::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}