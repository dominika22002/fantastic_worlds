#ifndef ZMIENNOKSZTALTNY_HH
#define ZMIENNOKSZTALTNY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Zmiennoksztaltny : public karta
{
public:
    string nazwa() const { return "Zmiennoksztaltny"; }
    string zestaw() const { return "KartaSpecjalna"; }
    int punkty() const { return 0; }
    float premia(vector<karta *> zestaw) const
    {
        return 0;
    }
    float kara(vector<karta *> zestaw) const
    {
        return 0;
    }
};

#endif
