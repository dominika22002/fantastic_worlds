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
    string nazwa() const { return "DrzewoSwiata"; }
    string zestaw() const { return "Artefakt"; }
    int punkty() const { return 2; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~DrzewoSwiata(){};
};

#endif