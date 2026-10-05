#ifndef GUERRIER_H
#define GUERRIER_H

#include <string>
#include "Personnage.h"
using namespace std;

class Guerrier : public Personnage
{
private:
    int capacite;
public:
    Guerrier();
    ~Guerrier();

    int Capacite();
    
    void setPouvoir(int pouvoir);

};

#endif