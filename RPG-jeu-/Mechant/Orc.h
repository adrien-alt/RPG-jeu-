#ifndef ORC_H
#define ORC_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Orc : public Ennemi
{
private:
    int capacite;
public:
    Orc();
    ~Orc();

    int Capacite();
    
    void setPouvoir(int pouvoir);
    void jouerTour(Personnage*cible) override;

};

#endif