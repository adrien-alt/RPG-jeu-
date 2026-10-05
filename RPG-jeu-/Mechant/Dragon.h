#ifndef DRAGON_H
#define DRAGON_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Dragon : public Ennemi
{
private:
    int capacite;
    int mana;
public:
    Dragon();
    ~Dragon();

    int Capacite();
    int Mana();
    
    void setPouvoir(int pouvoir);
    void setMana(int power);

};

#endif