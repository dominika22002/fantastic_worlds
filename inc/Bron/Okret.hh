#ifndef OKRET_HH
#define OKRET_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Okret : public karta
{
public:
    string nazwa() const { return "Okret"; }
    string zestaw() const { return "Bron"; }
    int punkty() const { return 23; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Okret(){};
};

#endif