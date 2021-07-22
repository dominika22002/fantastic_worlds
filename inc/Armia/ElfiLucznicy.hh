#ifndef ELFILUCZNICY_HH
#define ELFILUCZNICY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ElfiLucznicy : public karta
{
public:
    ElfiLucznicy() { set = "Armia"; }
    string nazwa() const { return "ElfiLucznicy"; }
    int punkty() const { return 10; }
    float premia(Zestaw zestaw) const
    {
        if (!zestaw.found("zestaw","Pogoda"))
            return 5;
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~ElfiLucznicy(){};
};

#endif