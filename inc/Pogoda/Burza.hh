#ifndef BURZA_HH
#define BURZA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Burza : public karta
{
public:
    string nazwa() const { return "Burza"; }
    string zestaw() const { return "Pogoda"; }
    int punkty() const { return 8; }
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