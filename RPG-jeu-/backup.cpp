/*if (decision == 1)
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

            degatEnnemi = ennemi->Attaquer();
            hero->RecevoirDegats(degatEnnemi);
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
                peronnageActuel = 1;
            }
            else if (decision == 2)
            {
                peronnageActuel = 2;
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

            degatEnnemi = ennemi->Attaquer();
            hero->RecevoirDegats(degatEnnemi);
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
                peronnageActuel = 1;
            }
            else if (decision == 2)
            {
                peronnageActuel = 2;
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
}*/

/*
        if (binaire == "Oui" or binaire == "oui")
        {
            cout << "Que choisis tu :" << endl;
            cout << "1. Hero" << endl;
            cout << "2. Compagnon" << endl;
            cin >> decision;
            if (decision == 1)
            {
                personnageActuel = 1;
            }
            else if (decision == 2)
            {
                personnageActuel = 2;
            }
            else
            {
                cout << "Choix invalide" << endl;
            }
        }*/