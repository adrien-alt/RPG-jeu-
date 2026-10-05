#include "Orc.h"

using namespace std;

Orc::Orc()
{
    setAttaque(15);
    setPointVie(110);
}
Orc::~Orc()
{
}
int Orc::Capacite()
{
    return capacite;
}
void Orc::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}