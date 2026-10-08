/*while (true)
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

            // ennemi attaque
            degatEnnemi = ennemi->Attaquer();
            compagnon->RecevoirDegats(degatEnnemi);

            if (compagnon->RecupPointVie() <= 0)
            {
                cout << "Vous êtes mort" << endl;
                break;
            }
            cout << "Vous avez maintenant: " << compagnon->RecupPointVie() << "pv" << endl;
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
    }
}
else
{
    cout << "Choix invalide" << endl;
}*/