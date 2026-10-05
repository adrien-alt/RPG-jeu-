#ifndef SORCIER_H
#define SORCIER_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Sorcier : public Ennemi
{
private:
    int capacite;
    int mana;
public:
    Sorcier();
    ~Sorcier();

    int Capacite();
    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif