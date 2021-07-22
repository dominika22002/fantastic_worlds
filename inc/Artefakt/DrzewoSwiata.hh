#ifndef DRZEWOSWIATA_HH
#define DRZEWOSWIATA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class DrzewoSwiata : public karta
{
public:
    DrzewoSwiata() { set = "Artefakt"; }
    string nazwa() const { return "DrzewoSwiata"; }
    int punkty() const { return 2; }
    float premia(Zestaw zestaw) const
    {
        if (zestaw.is_different())
            return 50;
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~DrzewoSwiata(){};
};

#endif