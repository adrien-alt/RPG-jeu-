#ifndef ESPRIT_H
#define ESPRIT_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Esprit : public Ennemi
{
private:
    int capacite;
    int mana;
public:
    Esprit();
    ~Esprit();

    int Capacite();
    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif