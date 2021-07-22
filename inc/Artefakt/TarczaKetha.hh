#ifndef TARCZAKETHA_HH
#define TARCZAKETHA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class TarczaKetha : public karta
{
public:
    TarczaKetha() { set = "Artefakt"; }
    string nazwa() const { return "TarczaKetha"; }
    int punkty() const { return 4; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("zestaw", "Przywodca"))
        {
            if (zestaw.found("nazwa", "MieczKetha"))
                return 50;
            else
                return 15;
        }
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~TarczaKetha(){};
};

#endif
