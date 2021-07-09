#ifndef POTOP_HH
#define POTOP_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Potop : public karta
{
public:
    string nazwa() const { return "Potop"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 32; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Potop(){};
};

#endif
