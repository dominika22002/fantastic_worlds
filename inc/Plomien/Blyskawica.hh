#ifndef BLYSKAWICA_HH
#define BLYSKAWICA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Blyskawica : public karta
{
public:
    string nazwa() const { return "Blyskawica"; }
    string zestaw() const { return "Plomien"; }
    int punkty() const { return 11; }
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
