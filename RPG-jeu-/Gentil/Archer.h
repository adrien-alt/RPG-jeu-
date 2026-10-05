#ifndef ARCHER_H
#define ARCHER_H

#include <string>
#include "Personnage.h"
using namespace std;

class Archer : public Personnage
{
private:
    int capacite;
public:
    Archer();
    ~Archer();

    int Capacite();
    
    void setPouvoir(int pouvoir);

};

#endif