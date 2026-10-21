#include "objet.h"
#include "Personnage.h"

using namespace std;

Objet::Objet()
{
    potionVie = 30;
    potionAttaque = 30;
    quantiteDePotionVie =3;
    quantiteDePotionAttaque = 3;
}
Objet::~Objet()
{

}
void Objet::PotionVie(Personnage& personnage)
{
    personnage.seSoigner(potionVie);
}
void Objet::PotionAttaque(Personnage& personnage)
{
    personnage.degatPotion(potionAttaque);
}
void Objet::quantiteRestantVie()
{
    if (quantiteDePotionVie > 0)
    {
        quantiteDePotionVie = quantiteDePotionVie - 1;
    }
}
void Objet::quantiteRestantAttaque()
{
    if(quantiteDePotionAttaque > 0)
    {
        quantiteDePotionAttaque = quantiteDePotionAttaque - 1;
    }
}
int Objet::recupererQuantiteAttaque()
{
    return quantiteDePotionAttaque;
}
int Objet::recupererQuantiteVie()
{
    return quantiteDePotionVie;
}