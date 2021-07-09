#ifndef DZWONNICA_HH
#define DZWONNICA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Dzwonnica : public karta
{
public:
    string nazwa() const { return "Dzwonnica"; }
    string zestaw() const { return "Kraina"; }
    int punkty() const { return 4; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Dzwonnica(){};
};

#endif