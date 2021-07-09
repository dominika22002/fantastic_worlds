#ifndef KROLOWA_HH
#define KROLOWA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Krolowa : public karta
{
public:
    string nazwa() const { return "Krolowa"; }
    string zestaw() const { return "Przywodca"; }
    int punkty() const { return 6; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Krolowa(){};
};

#endif