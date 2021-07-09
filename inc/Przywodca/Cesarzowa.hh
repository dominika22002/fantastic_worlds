#ifndef CESARZOWA_HH
#define CESARZOWA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Cesarzowa : public karta
{
public:
    string nazwa() const { return "Cesarzowa"; }
    string zestaw() const { return "Przywodca"; }
    int punkty() const { return 15; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Cesarzowa(){};
};

#endif