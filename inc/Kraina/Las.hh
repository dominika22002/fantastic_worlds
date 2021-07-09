#ifndef LAS_HH
#define LAS_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Las : public karta
{
public:
    string nazwa() const { return "Las"; }
    string zestaw() const { return "Kraina"; }
    int punkty() const { return 7; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Las(){};
};

#endif