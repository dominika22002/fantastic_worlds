#ifndef SNIEZYCA_HH
#define SNIEZYCA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Sniezyca : public karta
{
public:
    string nazwa() const { return "Sniezyca"; }
    string zestaw() const { return "Pogoda"; }
    int punkty() const { return 30; }
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