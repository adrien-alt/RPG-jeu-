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