#ifndef ARCHER_H
#define ARCHER_H

#include <string>
#include "Personnage.h"
using namespace std;

class Archer : public Personnage
{
private:
public:
    Archer();
    ~Archer();

    
    void setPouvoir(int pouvoir);

};

#endif