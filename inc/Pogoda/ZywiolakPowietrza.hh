#ifndef ZYWIOLAKPOWIETRZA_HH
#define ZYWIOLAKPOWIETRZA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ZywiolakPowietrza : public karta
{
public:
    string nazwa() const { return "ZywiolakPowietrza"; }
    string zestaw() const { return "Pogoda"; }
    int punkty() const { return 4; }
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