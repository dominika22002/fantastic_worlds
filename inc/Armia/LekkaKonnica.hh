#ifndef LEKKAKONNICA_HH
#define LEKKAKONNICA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class LekkaKonnica : public karta
{
public:
    string nazwa() const { return "LekkaKonnica"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 17; }
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