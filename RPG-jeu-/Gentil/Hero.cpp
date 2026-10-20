#include "Hero.h"

using namespace std;

Hero::Hero()
{
    setAttaque(200);
    setPointVie(1000);
    setPointVieMax(100);
    setCapacite(50);
    setProtection(25);
    niveau = 1;
    experienceActuelle = 0;
    experienceMax = 100;
}
Hero::~Hero()
{
}