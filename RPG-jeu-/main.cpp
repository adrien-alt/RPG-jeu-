
#include "Gentil/Hero.h"
#include "Gentil/Guerrier.h"
#include "Gentil/Mage.h"
#include "Gentil/Archer.h"

#include "Personnage/objet.h"
#include "Personnage/Arme.h"
#include "Personnage/Armure.h"
#include "Personnage/Inventaire.h"
#include "Personnage/Personnage.h"

#include "Mechant/Ennemi.h"
#include "Mechant/Dragon.h"
#include "Mechant/Gobelin.h"
#include "Mechant/Orc.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    Personnage* compagnon = nullptr;
    Personnage* actif = nullptr;
    Hero* hero = new Hero();
    Ennemi* ennemi = nullptr;

    Objet potionVie("potion de vie", 3);
    Objet potionAttaque("potion d'attaque", 2);

    Arme arme;
    Armure armure;
    Inventaire inventaire;

    int degatTotaux = 0;
    int degatJoueur = 0;
    int choix = 0;
    int decision = 0;
    int personnageActuel = 1;

    int armeHero = 0;
    int armureHero = 0;
    int armeCompagnon = 0;
    int armureCompagnon = 0;

    string binaire;
    string reponseInventaire;

    hero->setRole(1);

    // Choix du compagnon
    cout << "Creation du Hero" << endl;
    cout << "Vie du Hero : " << hero->RecupPointVie() << endl;
    cout << "Attaque du Hero : " << hero->RecupAttaque() << endl;
    cout << "Capacite du Hero : " << hero->Capacite() << endl;
    cout << "Bouclier du Hero : " << hero->Protection() << endl;

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

    compagnon->setRole(2);

    cout << "Vie : " << compagnon->RecupPointVie() << endl;
    cout << "Attaque : " << compagnon->RecupAttaque() << endl;
    cout << "Protection : " << compagnon->Protection() << endl;

    // Choix de l'ennemi
    cout << "====================================" << endl;
    cout << "Choisissez un ennemi :" << endl;
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
        cout << "Choix invalide." << endl;
        delete hero;
        delete compagnon;
        return 1;
    }

    cout << "Vie : " << ennemi->RecupPointVie() << endl;
    cout << "Attaque : " << ennemi->RecupAttaque() << endl;
    cout << "Protection : " << ennemi->Protection() << endl;

    // Combattre ou fuir
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

    // Choix du premier personnage
    cout << "Qui doit commencer ?" << endl;
    cout << "1. Le Hero" << endl;
    cout << "2. Le compagnon : " << compagnon->RecupNom() << endl;
    cin >> choix;

    if (choix == 1 || choix == 2)
    {
        personnageActuel = choix;
    }
    else
    {
        cout << "Choix invalide, le Hero commence." << endl;
        personnageActuel = 1;
    }

    // Choix de l'arme du Hero
    cout << "Choisissez l'arme du Hero :" << endl;
    cout << "1. Epee" << endl;
    cout << "2. Arc" << endl;
    cout << "3. Massue" << endl;
    cout << "4. Dague" << endl;
    cin >> armeHero;

    if (armeHero < 1 || armeHero > 4)
    {
        cout << "Choix invalide, l'epee sera utilisee." << endl;
        armeHero = 1;
    }

    // Choix de l'armure du Hero
    cout << "Choisissez l'armure du Hero :" << endl;
    cout << "1. Plastron" << endl;
    cout << "2. Jambiere" << endl;
    cout << "3. Casque" << endl;
    cout << "4. Bras" << endl;
    cout << "5. Armure au complet" << endl;
    cin >> armureHero;

    if (armureHero < 1 || armureHero > 5)
    {
        cout << "Choix invalide, armure complete selectionnee." << endl;
        armureHero = 5;
    }

    // Choix de l'arme du compagnon
    cout << "Choisissez l'arme du compagnon :" << endl;
    cout << "1. Epee" << endl;
    cout << "2. Arc" << endl;
    cout << "3. Massue" << endl;
    cout << "4. Dague" << endl;
    cin >> armeCompagnon;

    if (armeCompagnon < 1 || armeCompagnon > 4)
    {
        cout << "Choix invalide, l'epee sera utilisee." << endl;
        armeCompagnon = 1;
    }

    // Choix de l'armure du compagnon
    cout << "Choisissez l'armure du compagnon :" << endl;
    cout << "1. Plastron" << endl;
    cout << "2. Jambiere" << endl;
    cout << "3. Casque" << endl;
    cout << "4. Bras" << endl;
    cout << "5. Armure au complet" << endl;
    cin >> armureCompagnon;

    if (armureCompagnon < 1 || armureCompagnon > 5)
    {
        cout << "Choix invalide, armure complete selectionnee." << endl;
        armureCompagnon = 5;
    }

    // Boucle principale du combat
    while (ennemi->RecupPointVie() > 0 &&
           (hero->RecupPointVie() > 0 ||
            compagnon->RecupPointVie() > 0))
    {
        if (personnageActuel == 1)
        {
            actif = hero;
        }
        else
        {
            actif = compagnon;
        }

        // Si le personnage choisi est KO, passer a l'autre
        if (actif->RecupPointVie() <= 0)
        {
            if (personnageActuel == 1 &&
                compagnon->RecupPointVie() > 0)
            {
                personnageActuel = 2;
                actif = compagnon;
            }
            else if (personnageActuel == 2 &&
                     hero->RecupPointVie() > 0)
            {
                personnageActuel = 1;
                actif = hero;
            }
            else
            {
                break;
            }
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
            int armeChoisie;

            if (personnageActuel == 1)
            {
                armeChoisie = armeHero;
            }
            else
            {
                armeChoisie = armeCompagnon;
            }

            degatTotaux = arme.degatArme(actif, armeChoisie);

            if (degatTotaux < 0)
            {
                cout << "Impossible de calculer les degats." << endl;
                continue;
            }

            degatJoueur = degatTotaux;
            ennemi->RecevoirDegats(degatJoueur);

            cout << actif->RecupNom() << " attaque !" << endl;
            cout << "Degats infliges : " << degatJoueur << endl;
        }
        else if (decision == 2)
        {
            degatJoueur = actif->Capacite();
            cout << "Capacite utilisee !" << endl;
            cout << "Degats infliges : " << degatJoueur << endl;
            ennemi->RecevoirDegats(degatJoueur);
        }
        else if (decision == 3)
        {
            cout << "Tu fuis le combat." << endl;
            break;
        }
        else
        {
            cout << "Choix invalide." << endl;
            continue;
        }

        // Verifier si l'ennemi est mort
        if (ennemi->RecupPointVie() <= 0)
        {
            cout << "L'ennemi est mort !" << endl;
            actif->gagnerExeperience(50);
            cout << "Tu as gagne 50 XP." << endl;
            break;
        }

        cout << "PV de l'ennemi : "
             << ennemi->RecupPointVie() << endl;

        // Tour de l'ennemi
        ennemi->jouerTour(actif);

        cout << actif->RecupNom() << " a maintenant "
             << actif->RecupPointVie() << " PV." << endl;

        // Gestion des KO
        if (actif->RecupPointVie() <= 0)
        {
            cout << actif->RecupNom() << " est KO !" << endl;

            if (personnageActuel == 1 &&
                compagnon->RecupPointVie() > 0)
            {
                personnageActuel = 2;
                cout << "Le compagnon prend le relais !" << endl;
            }
            else if (personnageActuel == 2 &&
                     hero->RecupPointVie() > 0)
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

        // Utilisation de l'inventaire
        cout << "Voulez-vous utiliser un objet dans l'inventaire ? (oui/non)" << endl;
        cin >> reponseInventaire;

        if (reponseInventaire == "oui" ||
            reponseInventaire == "Oui")
        {
            cout << "Que prenez-vous ?" << endl;
            cout << "1. Potion de vie : "
                 << potionVie.recupererQuantite() << endl;
            cout << "2. Potion d'attaque : "
                 << potionAttaque.recupererQuantite() << endl;
            cin >> choix;

            if (choix == 1)
            {
                if (potionVie.recupererQuantite() > 0 &&
                    actif->RecupPointVie() > 0)
                {
                    potionVie.PotionVie(*actif);
                    potionVie.quantiteRestante();

                    cout << "Potions de vie restantes : "
                         << potionVie.recupererQuantite() << endl;
                }
                else
                {
                    cout << "Potion de vie indisponible." << endl;
                }
            }
            else if (choix == 2)
            {
                if (potionAttaque.recupererQuantite() > 0)
                {
                    potionAttaque.PotionAttaque(*ennemi);
                    potionAttaque.quantiteRestante();

                    cout << "PV de l'ennemi : "
                         << ennemi->RecupPointVie() << endl;
                    cout << "Potions d'attaque restantes : "
                         << potionAttaque.recupererQuantite() << endl;
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

        if (ennemi->RecupPointVie() <= 0)
        {
            cout << "L'ennemi est mort !" << endl;
            break;
        }

        // Changement de personnage
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
