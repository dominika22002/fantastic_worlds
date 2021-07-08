#ifndef RYCERZE_HH
#define RYCERZE_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Rycerze : public karta
{
public:
    string nazwa() const { return "Rycerze"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 20; }
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