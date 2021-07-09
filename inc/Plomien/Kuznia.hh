#ifndef KUZNIA_HH
#define KUZNIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Kuznia : public karta
{
public:
    string nazwa() const { return "Kuznia"; }
    string zestaw() const { return "Plomien"; }
    int punkty() const { return 9; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Kuznia(){};
};

#endif
