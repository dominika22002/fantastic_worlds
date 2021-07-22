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
    MieczKetha() { set = "Bron"; }
    string nazwa() const { return "MieczKetha"; }
    int punkty() const { return 7; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.found("zestaw", "Przywodca"))
        {
            if (zestaw.found("karta", "TarczaKetha"))
            {
                return 40;
            }
            else
                return 10;
        }
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~MieczKetha(){};
};

#endif
