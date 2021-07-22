#ifndef SMOK_HH
#define SMOK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Smok : public karta
{
public:
    Smok() { set = "Bestia"; }
    string nazwa() const { return "Smok"; }
    int punkty() const { return 30; }
    float premia(Zestaw zestaw) const
    {
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        if (!zestaw.found("zestaw", "Czarodziej"))
            return -40;
        else
            return 0;
    }
    virtual ~Smok(){};
};

#endif