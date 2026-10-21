#ifndef INVENTAIRE_H
#define INVENTAIRE_H
#include "objet.h"
#include "Arme.h"
#include "Armure.h"

#include <string>
#include <vector>
using namespace std;

class Inventaire 
{
    private:
    vector<Objet>objets;    
    public:
    Inventaire();
    ~Inventaire();

    void ajouterObjet(const Objet& objet);
    void retirerObjet(int valeur);
    void afficherInventaire() const;
};

#endif