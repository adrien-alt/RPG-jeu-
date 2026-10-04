#include "Inventaire.h"

using namespace std;

Inventaire::Inventaire()
{
    potionVie = 0;
    potionMana = 0;
    epee = false;
    bouclier = false;
    baguette = false;
}
Inventaire::~Inventaire()
{

}
void Inventaire::PotionVie(int nombre)
{
    potionVie = potionVie + nombre;
}
void Inventaire:: PotionMana(int nombreMana)
{
    potionMana = potionMana + nombreMana;
}
bool Inventaire::Epee()
{
    return epee;
}
bool Inventaire::Bouclier()
{
    return bouclier;
}
bool Inventaire::Baguette()
{
    return baguette;
}