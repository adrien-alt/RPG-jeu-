#include "Gentil/Personnage.h"
#include "Gentil/Hero.h"
#include "Gentil/Guerrier.h"
#include "Gentil/Mage.h"
#include "Gentil/Archer.h"

#include "Mechant/Ennemi.h"
#include "Mechant/Dragon.h"
#include "Mechant/Gobelin.h"
#include <iostream>
#include <string>

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
    int changerRole;
    string binaire;

    hero->setRole(1);
    compagnon->setRole(2);

    std::cout << "Création du Héro" << endl;
    std::cout << "Vie du Héro:" << hero->RecupPointVie() << endl;
    cout << "Attaque du Héro: " << hero->RecupAttaque() << endl;
    cout << "Capacite du Hero: " << hero->Capacite() << endl;
    cout << "Choisissez votre 1er compagnon: " << endl;
    cout << "1. Guerrier" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Archer" << endl;
    cin >> choix;
    if (choix == 1)
    {
        compagnon = new Guerrier();
        cout << "Tu as choisit: Guerrier" << endl;
        compagnon->RecupNom();
    }
    else if (choix == 2)
    {
        compagnon = new Mage();
        cout << "tu as choisit: Mage" << endl;
        compagnon->RecupNom();
    }
    else if (choix == 3)
    {
        compagnon = new Archer();
        cout << "Tu as choisit: Archer" << endl;
        compagnon->RecupNom();
    }
    else
    {
        cout << "choix invalide" << endl;
    }
    cout << "Vie: " << compagnon->RecupPointVie() << endl;
    cout << "Attaque: " << compagnon->RecupAttaque() << endl;
    cout << "====================================" << endl;

    cout << "Il y a un ennemi tu choisis quoi: " << endl;
    cout << "1. Combattre" << endl;
    cout << "2. Fuir" << endl;
    cout << endl;
    cout << "====================================" << endl;
    cout << "Qui doit commencer ?" << endl;
    cout << "1. Le hero" << endl;
    cout << "2. Le compagnon: " << compagnon->RecupNom() << endl;
    cout << "====================================" << endl;
    cin >> decision;
    if (decision == 1)
    {
        while (true)
        {
            cout << endl;
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
                    break;
                }
                cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;
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
                else
                {
                    degatEnnemi = ennemi->Attaquer();
                    hero->RecevoirDegats(degatEnnemi);
                }
                cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;
            }
            else if (decision == 3)
            {
                cout << "Tu fuis" << endl;
                break;
            }
            cout << "Vous avez maintenant: " << compagnon->RecupPointVie() << "pv" << endl;
            cout << "Voulez-vous changez de personnage:" << endl;
            cout << "Oui" << endl;
            cout << "Non" << endl;
            cin >> binaire;
            if (binaire == "Oui" or binaire == "oui")
            {
                cout << "Que choisis tu :" << endl;
                cout << "1. Hero" << endl;
                cout << "2. Compagnon" << endl;
                cin >> decision;
                if (decision == 1)
                {
                    hero->ChangerRole();
                }
                else if (decision == 2)
                {
                    compagnon->ChangerRole();
                }
                else
                {
                    cout << "Choix invalide" << endl;
                }
            }
            else if (binaire == "Non" or binaire == "non")
            {
                cout << "Retour avec le personnage " << endl;
            }
            else
            {
                cout << "Choix invalide" << endl;
            }
        }
    }
    else if (decision == 2)
    {
        while (true)
        {
            cout << endl;
            cout << "====================================" << endl;
            cout << "1. Attaquer" << endl;
            cout << "2. Capacite" << endl;
            cout << "3. Fuir" << endl;
            cout << "=====================================" << endl;
            cin >> decision;

            if (decision == 1)
            {
                // Attaque
                degatJoueur = compagnon->Attaquer();
                ennemi->RecevoirDegats(degatJoueur);

                if (ennemi->RecupPointVie() <= 0)
                {
                    cout << "L'ennemi est mort" << endl;
                }
                cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;
            }

            else if (decision == 2)
            {
                // Capacité
                degatJoueur = compagnon->Capacite();
                cout << "Capacité utilisé!" << endl;
                ennemi->RecevoirDegats(degatJoueur);
                if (ennemi->RecupPointVie() == 0)
                {
                    cout << "L'ennemi est mort" << endl;
                    break;
                }
                else
                {
                    degatEnnemi = ennemi->Attaquer();
                    compagnon->RecevoirDegats(degatEnnemi);
                }
                cout << "L'ennemi possède maintenant: " << ennemi->RecupPointVie() << "pv" << endl;
                cout << "Le compagnon a : " << compagnon->RecupPointVie() << "pv" << endl;
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

            degatEnnemi = ennemi->Attaquer();
            compagnon->RecevoirDegats(degatEnnemi);
            if (compagnon->RecupPointVie() <= 0)
            {
                cout << "Vous êtes mort" << endl;
                break;
            }

            cout << "Vous avez maintenant: " << compagnon->RecupPointVie() << "pv" << endl;
            cout << "Voulez-vous changez de personnage:" << endl;
            cout << "Oui" << endl;
            cout << "Non" << endl;
            cin >> binaire;
            if (binaire == "Oui" or binaire == "oui")
            {
                cout << "Que choisis tu :" << endl;
                cout << "1. Hero" << endl;
                cout << "2. Compagnon" << endl;
                cin >> decision;
                if (decision == 1)
                {
                    hero->ChangerRole();
                }
                else if (decision == 2)
                {
                    compagnon->ChangerRole();
                }
                else
                {
                    cout << "Choix invalide" << endl;
                }
            }

            else if (binaire == "Non" or binaire == "non")
            {
                cout << "Retour avec le personnage " << endl;
            }

            else
            {
                cout << "Choix invalide" << endl;
            }
        }
    }
}