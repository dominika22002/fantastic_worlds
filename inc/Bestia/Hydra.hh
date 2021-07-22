#ifndef HYDRA_HH
#define HYDRA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Hydra : public karta
{
public:
    Hydra() { set = "Bestia"; }
    string nazwa() const { return "Hydra"; }
    int punkty() const { return 12; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("nazwa", "Bagno"))
            return 28;
        else
            return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
};

#endif
