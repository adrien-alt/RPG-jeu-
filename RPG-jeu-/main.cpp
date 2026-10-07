#include "Gentil/Personnage.h"
#include "Gentil/Hero.h"
#include "Gentil/Guerrier.h"
#include "Gentil/Mage.h"
#include "Gentil/Archer.h"

#include "Mechant/Ennemi.h"
#include "Mechant/Dragon.h"
#include "Mechant/Gobelin.h"
#include <iostream>

using namespace std;

int main()
{
    Personnage *compagnon;
    Hero *hero = new Hero();
    Ennemi *ennemi = new Ennemi();
    int choix;
    int decision;
    int degatJoueur;
    int degatEnnemi;

    cout << "Création du Héro" << endl;
    cout << "Vie du Héro:" << hero->RecupPointVie() << endl;
    cout << "Attaque du Héro: " << hero->RecupAttaque() << endl;
    cout << "Choisissez votre 1er compagnon: " << endl;
    cout << "1. Guerrier" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Archer" << endl;
    cin >> choix;
    if (choix == 1)
    {
        compagnon = new Guerrier();
        cout << "Tu as choisit: Guerrier" << endl;
        cout << "Vie: " << compagnon->RecupPointVie() << endl;
        cout << "Attaque: " << compagnon->RecupAttaque() << endl;
        compagnon->setPouvoir(300);
    }
    else if (choix == 2)
    {
        compagnon = new Mage();
        cout << "tu as choisit: Mage" << endl;
        cout << "Vie: " << compagnon->RecupPointVie() << endl;
        cout << "Attaque: " << compagnon->RecupAttaque() << endl;
        compagnon->setPouvoir(250);
    }
    else if (choix == 3)
    {
        compagnon = new Archer();
        cout << "Tu as choisit: Archer" << endl;
        cout << "Vie: " << compagnon->RecupPointVie() << endl;
        cout << "Attaque: " << compagnon->RecupAttaque() << endl;
        compagnon->setPouvoir(150);
    }
    else
    {
        cout << "choix invalide" << endl;
    }
    cout << "Il y a un ennemi tu choisis quoi: " << endl;
    cout << "1. Combattre" << endl;
    cout << "2. Fuir" << endl;
    while (true)
    {
        cout << "====================================" << endl;
        cout << "1. Attaquer" << endl;
        cout << "2. Capacite" << endl;
        cout << "3. Fuir" << endl;
        cout << "=====================================" << endl;
        cin >> decision;
        if (decision == 1)
        {
            // Attaque
            degatJoueur = hero->Attaquer();
            ennemi->RecevoirDegats(degatJoueur);

            if (ennemi->RecupPointVie() <= 0)
            {
                cout << "L'ennemi est mort" << endl;
            }
            cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;

            // ennemi attaque
            degatEnnemi = ennemi->Attaquer();
            hero->RecevoirDegats(degatEnnemi);

            if (hero->RecupPointVie() <= 0)
            {
                cout << "Vous êtes mort" << endl;
                break;
            }
            cout << "Vous avez maintenant: " << hero->RecupPointVie() << "pv" << endl;
        }
        else if (decision == 2)
        {
            // Capacité
            degatJoueur = hero->Capacite();
            cout << "Capacité utilisé!" << endl;
            ennemi->RecevoirDegats(degatJoueur);
            if (ennemi->RecupPointVie() <= 0)
            {
                cout << "L'ennemi est mort" << endl;
                break;
            }
            cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;
        }
        else if (decision == 3)
        {
            cout << "Tu fuis" << endl;
            break;
        }
        else
        {
            cout << "Choix invalide" << endl;
        }
    }
}