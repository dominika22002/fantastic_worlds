#ifndef BAZYLISZEK_HH
#define BAZYLISZEK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Bazyliszek : public karta
{
public:
    string nazwa() const { return "Bazyliszek"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 35; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Bazyliszek(){};
};

#endif