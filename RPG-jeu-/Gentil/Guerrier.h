#ifndef GUERRIER_H
#define GUERRIER_H

#include <string>
#include "../Personnage/Personnage.h"
using namespace std;

class Guerrier : public Personnage
{
private:
public:
    Guerrier();
    ~Guerrier();
    
    void setPouvoir(int pouvoir);

};

#endif