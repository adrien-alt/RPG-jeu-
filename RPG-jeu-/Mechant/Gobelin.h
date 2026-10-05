#ifndef GOBELIN_H
#define GOBELIN_H

#include <string>
#include "Ennemi.h"
using namespace std;

class Gobelin : public Ennemi
{
private:
    int capacite;
public:
    Gobelin();
    ~Gobelin();

    int Capacite();
    
    void setPouvoir(int pouvoir);

};

#endif