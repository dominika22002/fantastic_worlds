#ifndef DYM_HH
#define DYM_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Dym : public karta
{
public:
    string nazwa() const { return "Dym"; }
    string zestaw() const { return "Pogoda"; }
    int punkty() const { return 27; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Dym(){};
};

#endif