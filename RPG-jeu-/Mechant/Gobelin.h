#ifndef GOBELIN_H
#define GOBELIN_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Gobelin : public Ennemi
{
private:
public:
    Gobelin();
    ~Gobelin();

    void jouerTour(Personnage*cible) override;

};

#endif;