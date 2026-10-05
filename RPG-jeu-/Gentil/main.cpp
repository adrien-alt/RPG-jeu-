#include "Personnage.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Hero.h"
#include "Archer.h"
#include <iostream>

using namespace std;

int main()
{
    Personnage* compagnon;
    Hero* hero = new Hero();
    int choix;

    cout<<"Création du Héro"<<endl;
    cout<<"Vie du Héro:"<<hero->RecupPointVie()<<endl;
    cout<<"Attaque du Héro: "<< hero->RecupAttaque()<<endl;
    cout<<"Choisissez votre 1er compagnon: "<<endl;
    cout<<"1. Guerrier"<<endl;
    cout<<"2. Mage"<<endl;
    cout<<"3. Archer"<<endl;
    cin >> choix;
    if(choix == 1)
    {
        compagnon = new Guerrier();
        cout<<"Tu as choisit: Guerrier"<<endl;
        cout<<"Vie: "<<compagnon ->RecupPointVie()<<endl;
        cout<<"Attaque: "<<compagnon ->RecupAttaque()<<endl;
        compagnon->setPouvoir(300);
    }
    else if(choix == 2){
        compagnon = new Mage();
        cout<<"tu as choisit: Mage"<<endl;
        cout<<"Vie: "<<compagnon ->RecupPointVie()<<endl;
        cout<<"Attaque: "<<compagnon ->RecupAttaque()<<endl;
        compagnon->setPouvoir(250);
    }
    else if(choix == 3)
    {
        compagnon = new Archer();
        cout<<"Tu as choisit: Archer"<<endl;
        cout<<"Vie: "<<compagnon ->RecupPointVie()<<endl;
        cout<<"Attaque: "<<compagnon ->RecupAttaque()<<endl;
        compagnon->setPouvoir(150);
    }
    else
    {
        cout<<"choix invalide"<<endl;
    }
}