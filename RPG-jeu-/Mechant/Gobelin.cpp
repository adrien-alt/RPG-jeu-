#include "Gobelin.h"

using namespace std;

Gobelin::Gobelin()
{
    setAttaque(15);
    setPointVie(110);
}
Gobelin::~Gobelin()
{
}
int Gobelin::Capacite()
{
    return capacite;
}
void Gobelin::setPouvoir(int pouvoir)
{
    capacite = pouvoir;
}