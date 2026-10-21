#include "Inventaire.h"
#include "Personnage.h"
#include "objet.h"
#include "iostream"
#include <vector>
using namespace std;

Inventaire::Inventaire()
{
}
Inventaire::~Inventaire()
{
}
void Inventaire::ajouterObjet(const Objet& objet)
{
    objets.push_back(objet);
}
void Inventaire::afficherInventaire()const
{
    if(objets.empty())
    {
        cout<<"Ton inventaire et vide"<<endl;
        return;
    }
    for(size_t i = 0; i<objets.size(); i++)
    {
        cout<<"Il y a un objet dans ton inventaire: "<<endl;
    }
}
void Inventaire::retirerObjet(int valeur)
{
    if(valeur >= 0 && static_cast<size_t>(valeur)<objets.size())
    {
        objets.erase(objets.begin()+valeur);
    }
    else
    {
        cout<<"Valeur invalide"<<endl;
    }
}