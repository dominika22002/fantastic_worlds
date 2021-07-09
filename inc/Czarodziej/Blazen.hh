#ifndef BLAZEN_HH
#define BLAZEN_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Blazen : public karta
{
public:
    string nazwa() const { return "Blazen"; }
    string zestaw() const { return "Czarodziej"; }
    int punkty() const { return 3; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Blazen(){};
};

#endif
