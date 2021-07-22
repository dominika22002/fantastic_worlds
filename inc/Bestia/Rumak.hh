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
    Rumak() { set = "Bestia"; }
    string nazwa() const { return "Rumak"; }
    int punkty() const { return 6; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("zestaw", "Przywodca") || zestaw.found("zestaw", "Czarodziej"))
            return 14;
        else
            return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~Rumak(){};
};

#endif

