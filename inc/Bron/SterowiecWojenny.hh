#ifndef STEROWIECWOJENNY_HH
#define STEROWIECWOJENNY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class SterowiecWojenny : public karta
{
public:
    string nazwa() const { return "SterowiecWojenny"; }
    string zestaw() const { return "Bron"; }
    int punkty() const { return 35; }
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