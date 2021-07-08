#ifndef MIECZKETHA_HH
#define MIECZKETHA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class MieczKetha : public karta
{
public:
    string nazwa() const { return "MieczKetha"; }
    string zestaw() const { return "Bron"; }
    int punkty() const { return 7; }
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