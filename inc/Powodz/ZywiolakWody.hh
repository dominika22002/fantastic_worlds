#ifndef ZYWIOLAKWODY_HH
#define ZYWIOLAKWODY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class ZywiolakWody : public karta
{
public:
    string nazwa() const { return "ZywiolakWody"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 4; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~ZywiolakWody(){};
};

#endif
