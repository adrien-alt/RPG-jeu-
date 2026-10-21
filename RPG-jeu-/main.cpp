
#include "Gentil/Personnage.h"
#include "Gentil/Hero.h"
#include "Gentil/Guerrier.h"
#include "Gentil/Mage.h"
#include "Gentil/Archer.h"
#include "Gentil/objet.h"
#include "Gentil/Arme.h"

#include "Mechant/Ennemi.h"
#include "Mechant/Dragon.h"
#include "Mechant/Gobelin.h"
#include "Mechant/Orc.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Personnage *compagnon = nullptr;
    Personnage *actif = nullptr;
    Hero *hero = new Hero();
    Ennemi *ennemi = nullptr;
    Objet potionVie;
    Objet potionAttaque;
    Arme arme;
    int degatTotaux = 0; 
    int choix;
    int decision;
    int degatJoueur = 0;
    int degatEnnemi;
    int personnageActuel = 1;
    string binaire;
    string inventaire;

    hero->setRole(1);
    cout << "Creation du Hero" << endl;
    cout << "Vie du Hero : " << hero->RecupPointVie() << endl;
    cout << "Attaque du Hero : " << hero->RecupAttaque() << endl;
    cout << "Capacite du Hero : " << hero->Capacite() << endl;
    cout << "Bouclier du Hero: " << hero->Protection() << endl;
    cout << "Choisissez votre premier compagnon :" << endl;
    cout << "1. Guerrier" << endl;
    cout << "2. Mage" << endl;
    cout << "3. Archer" << endl;
    cin >> choix;
    if (choix == 1)
    {
        compagnon = new Guerrier();
        cout << "Tu as choisi : Guerrier" << endl;
    }
    else if (choix == 2)
    {
        compagnon = new Mage();
        cout << "Tu as choisi : Mage" << endl;
    }
    else if (choix == 3)
    {
        compagnon = new Archer();
        cout << "Tu as choisi : Archer" << endl;
    }
    else
    {
        cout << "Choix invalide." << endl;
        delete hero;
        return 1;
    }
    cout << "Vie : " << compagnon->RecupPointVie() << endl;
    cout << "Attaque : " << compagnon->RecupAttaque() << endl;
    cout << "Protection: " << compagnon->Protection() << endl;
    cout << "====================================" << endl;
    compagnon->setRole(2);
    cout << "Choisit un ennemi:" << endl;
    cout << "1. Gobelin" << endl;
    cout << "2. Orc" << endl;
    cout << "3. Dragon" << endl;
    cin >> choix;
    if (choix == 1)
    {
        ennemi = new Gobelin();
        cout << "Tu as choisi comme ennemi : Gobelin" << endl;
    }
    else if (choix == 2)
    {
        ennemi = new Orc();
        cout << "Tu as choisi comme ennemi : Orc" << endl;
    }
    else if (choix == 3)
    {
        ennemi = new Dragon();
        cout << "Tu as choisi comme ennemi : Dragon" << endl;
    }
    else
    {
        cout << "Choix invalide" << endl;
        delete hero;
        delete compagnon;
        return 1;
    }
    cout << "Vie : " << ennemi->RecupPointVie() << endl;
    cout << "Attaque : " << ennemi->RecupAttaque() << endl;
    cout << "Protection: " << ennemi->Protection() << endl;
    cout << "====================================" << endl;
    cout << "Un ennemi apparait !" << endl;
    cout << "1. Combattre" << endl;
    cout << "2. Fuir" << endl;
    cin >> decision;
    if (decision == 2)
    {
        cout << "Tu fuis le combat." << endl;
        delete hero;
        delete compagnon;
        delete ennemi;
        return 0;
    }
    else if (decision != 1)
    {
        cout << "Choix invalide." << endl;
        delete hero;
        delete compagnon;
        delete ennemi;
        return 1;
    }
    cout << "Qui doit commencer ?" << endl;
    cout << "1. Le Hero" << endl;
    cout << "2. Le compagnon : " << compagnon->RecupNom() << endl;
    cin >> choix;
    // CORRECTION : on choisit seulement le personnage ici.
    // Le menu des armes est déplacé dans le tour d'attaque.
    if (choix == 1 || choix == 2)
    {
        personnageActuel = choix;
    }
    else
    {
        cout << "Choix invalide, le Hero commence." << endl;
        personnageActuel = 1;
    }
    while (ennemi->RecupPointVie() > 0)
    {
        // Choisir le personnage actif
        if (personnageActuel == 1)
        {
            actif = hero;
        }
        else
        {
            actif = compagnon;
        }
        cout << endl;
        cout << "====================================" << endl;
        cout << "Personnage actif : " << actif->RecupNom() << endl;
        cout << "PV du Hero : " << hero->RecupPointVie() << endl;
        cout << "PV du compagnon : " << compagnon->RecupPointVie() << endl;
        cout << "PV de l'ennemi : " << ennemi->RecupPointVie() << endl;
        cout << "1. Attaquer" << endl;
        cout << "2. Capacite" << endl;
        cout << "3. Fuir" << endl;
        cin >> decision;

        if (decision == 1)
        {
            // CORRECTION : choix de l'arme à chaque attaque
            cout << "Choisissez une arme :" << endl;
            cout << "1. Epee" << endl;
            cout << "2. Arc" << endl;
            cout << "3. Massue" << endl;
            cout << "4. Dague" << endl;
            cin >> choix;

            if (choix < 1 || choix > 4)
            {
                cout << "Choix d'arme invalide !" << endl;
                continue;
            }
            if (choix == 1)
                cout << "Tu as choisi l'epee" << endl;
            else if (choix == 2)
                cout << "Tu as choisi l'arc" << endl;
            else if (choix == 3)
                cout << "Tu as choisi la massue" << endl;
            else
                cout << "Tu as choisi la dague" << endl;

            // CORRECTION : actif est défini avant cet appel
            degatTotaux = arme.degatArme(actif, choix);
            // CORRECTION : vérifier le résultat avant de l'utiliser
            if (degatTotaux < 0)
            {
                cout << "Impossible de calculer les degats." << endl;
                continue;
            }
            // CORRECTION : ne pas écraser les dégâts avec Attaquer()
        degatJoueur = degatTotaux;
        ennemi->RecevoirDegats(degatJoueur);
        }
        else if (decision == 2)
        {
            degatJoueur = actif->Capacite();
            cout << "Capacite utilisee !" << endl;
            ennemi->RecevoirDegats(degatJoueur);
        }
        else if (decision == 3)
        {
            cout << "Tu fuis." << endl;
            break;
        }
        else
        {
            cout << "Choix invalide." << endl;
            continue;
        }
        // Vérifier si l'ennemi est mort
        if (ennemi->RecupPointVie() <= 0)
        {
            cout << "L'ennemi est mort !" << endl;
            actif->gagnerExeperience(50);
            cout << "Tu as gagne 50 XP" << endl;
            break;
        }
        cout << "PV de l'ennemi : " << ennemi->RecupPointVie() << endl;
        // L'ennemi attaque
        ennemi->jouerTour(actif);
        cout << actif->RecupNom()<< " a maintenant " << actif->RecupPointVie()<< " PV." << endl;

        // Vérifier si le personnage actif est KO
        if (actif->RecupPointVie() <= 0)
        {
            cout << actif->RecupNom() << " est KO !" << endl;
            if (personnageActuel == 1 && compagnon->RecupPointVie() > 0)
            {
                personnageActuel = 2;
                cout << "Le compagnon prend le relais !" << endl;
            }
            else if (personnageActuel == 2 && hero->RecupPointVie() > 0)
            {
                personnageActuel = 1;
                cout << "Le Hero prend le relais !" << endl;
            }
            else
            {
                cout << "Toute l'equipe est KO." << endl;
                break;
            }
            continue;
        }
        // Proposition de l'inventaire
        cout << "Voulez-vous utiliser un objet dans l'inventaire ? (oui/non)" << endl;
        cin >> inventaire;

        if (inventaire == "oui" || inventaire == "Oui")
        {
            cout << "Que prenez-vous ?" << endl;
            cout << "1. Potion de vie : "<< potionVie.recupererQuantiteVie() << endl;
            cout << "2. Potion d'attaque : "<< potionAttaque.recupererQuantiteAttaque() << endl;
            cin >> choix;

            if (choix == 1)
            {
                if (potionVie.recupererQuantiteVie() > 0 && actif->RecupPointVie() > 0)
                {
                    potionVie.PotionVie(*actif);
                    potionVie.quantiteRestantVie();
                    cout << "Potions de vie restantes : "<< potionVie.recupererQuantiteVie() << endl;
                }
                else
                {
                    cout << "Tu n'as plus de potions de vie !" << endl;
                }
            }
            else if (choix == 2)
            {
                if (potionAttaque.recupererQuantiteAttaque() > 0)
                {
                    potionAttaque.PotionAttaque(*ennemi);
                    potionAttaque.quantiteRestantAttaque();

                    if (ennemi->RecupPointVie() <= 0)
                    {
                        cout << "L'ennemi est mort !" << endl;
                        break;
                    }
                    cout << "PV de l'ennemi : "<< ennemi->RecupPointVie() << endl;
                    cout << "Potions d'attaque restantes : "<< potionAttaque.recupererQuantiteAttaque() << endl;
                }
                else
                {
                    cout << "Tu n'as plus de potions d'attaque !" << endl;
                }
            }
            else
            {
                cout << "Choix invalide !" << endl;
            }
        }
        // Proposer de changer de personnage
        cout << "Voulez-vous changer de personnage ? (oui/non)" << endl;
        cin >> binaire;
        if (binaire == "oui" || binaire == "Oui")
        {
            cout << "1. Hero" << endl;
            cout << "2. Compagnon" << endl;
            cin >> choix;

            if (choix == 1 && hero->RecupPointVie() > 0)
            {
                personnageActuel = 1;
            }
            else if (choix == 2 && compagnon->RecupPointVie() > 0)
            {
                personnageActuel = 2;
            }
            else
            {
                cout << "Choix invalide ou personnage KO." << endl;
            }
        }
        else if (binaire != "non" && binaire != "Non")
        {
            cout << "Reponse invalide." << endl;
        }
    }
    cout << endl;
    cout << "Combat termine." << endl;
    cout << "PV du Hero : " << hero->RecupPointVie() << endl;
    cout << "PV du compagnon : " << compagnon->RecupPointVie() << endl;
    cout << "PV de l'ennemi : " << ennemi->RecupPointVie() << endl;

    delete hero;
    delete compagnon;
    delete ennemi;
    return 0;
}