#include "Personnage.h"
#include "Guerrier.h"
#include "Mage.h"
#include "Ennemi.h"
#include "Inventaire.h"
#include "Objet.h"
#include <iostream>
#include <random>

using namespace std;

int main()
{
    Ennemi pv;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(10, 20);
    Ennemi ennemi;
    Inventaire inventaire;

    int choix;
    int decision;
    int degatsJoueur;
    int degatsEnnemi;
    int degatsReels;
    int protectionRestante;
    int degatsRestant;
    int pvJoueur;

    cout <<"choississez un personnage: "<<endl;
    cout<<"1. Pour le guerrier"<<endl;
    cout<<"2. Pour le mage"<<endl;
    cin >> choix;
    Personnage* joueur;
    Personnage pointVie;
    if(choix == 1)
    {
        joueur = new Guerrier();
    }
    else
    {
        joueur = new Mage();
    }
    cout<<"Un ennemi vient vers toi tu fait quoi ?: "<<endl;
    cout<<"1. Combattre"<<endl;
    cout<<"2. Fuir"<<endl;
    cin >> decision;
    while(true)
    {
        degatsJoueur = joueur->RecupAttaque();
        cout << "Tu mets : " << degatsJoueur << " de degats" << endl;
        int pvEnnemi = ennemi.RecevoirDegats(degatsJoueur);
        cout << "Vie restante ennemie : " << pvEnnemi << endl;

        if(pvEnnemi == 0)
        {
            cout << "Tu as gagne !" << endl;
            break;
        }

        degatsEnnemi = distrib(gen);
        cout << "L'ennemi met : " << degatsEnnemi << " de degats" << endl;

        degatsReels = joueur->RecevoirShiel(degatsEnnemi);
        cout <<"Durabilit restante" << degatsReels<<endl;
        pvJoueur = joueur -> RecevoirDegats(degatsReels);
        cout << "Vie restante joueur : " << pvJoueur << endl;

        if(pvJoueur == 0)
        {
            cout << "Tu as perdu !" << endl;
            break;
        }
    }

    return 0;
}