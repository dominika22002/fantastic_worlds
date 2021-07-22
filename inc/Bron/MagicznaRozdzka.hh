#ifndef MAGICZNAROZDZKA_HH
#define MAGICZNAROZDZKA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class MagicznaRozdzka : public karta
{
public:
    MagicznaRozdzka() { set = "Bron"; }
    string nazwa() const { return "MagicznaRozdzka"; }
    int punkty() const { return 1; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("zestaw", "Czarodziej"))
            return 25;
        else
            return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~MagicznaRozdzka(){};
};

#endif