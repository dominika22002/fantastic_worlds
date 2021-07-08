#ifndef RUMAK_HH
#define RUMAK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Rumak : public karta
{
public:
    string nazwa() const { return "Rumak"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 6; }
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

