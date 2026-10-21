#include "Armure.h"
#include "objet.h"
#include <iostream>
#include <string>

using namespace std;

Armure::Armure()
{
    plastron = 50;
    jambiere = 25;
    casque = 30;
    bras = 25;
}
Armure::~Armure()
{

}

//retour de la protection de l'armure 
int Armure::getPlastron()
{
    return plastron;
}
int Armure::getBras()
{
    return bras;
}
int Armure::getCasque()
{
    return casque;
}
int Armure::getJambiere()
{
    return jambiere;
}
//choix partie armure
int Armure::protectionArmure(Personnage*bouclier, int choix)
{
    int protectionTotaux;
    if(choix==1)
    {
        protectionTotaux = bouclier->Protection() + plastron;
    }
    else if(choix == 2)
    {
        protectionTotaux = bouclier->Protection()+jambiere;
    }
    else if(choix == 3)
    {
        protectionTotaux = bouclier->Protection() + casque;
    }
    else if(choix == 4)
    {
        protectionTotaux = bouclier->Protection() + bras;
    }
    else if(choix == 5)
    {
        protectionTotaux = bouclier->Protection()+plastron+bras+jambiere+casque;
    }
    else
    {
        cout<<"Choix invalide"<<endl;
        return -1;
    }
    return protectionTotaux;
}