#include "Gobelin.h"

using namespace std;

Gobelin::Gobelin()
{
    setAttaque(15);
    setPointVie(50);
    setProtection(0);
}
Gobelin::~Gobelin()
{
}
void Gobelin::jouerTour(Personnage*cible)
{
    int degats = Attaquer();
    cible->RecevoirDegats(degats);
}