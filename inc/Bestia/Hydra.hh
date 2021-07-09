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
    string nazwa() const { return "Hydra"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 12; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Hydra(){};
};

#endif
