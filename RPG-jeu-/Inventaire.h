#ifndef INVENTAIRE_H
#define INVENTAIRE_H


using namespace std;

class Inventaire
{
private:
    int potionVie;
    int potionMana;
    bool epee;
    bool bouclier;
    bool baguette;
public:
    Inventaire();
    ~Inventaire();

    void PotionVie(int nombre);
    void PotionMana(int nombreMa);
    bool Epee();
    bool Bouclier();
    bool Baguette();
};

#endif