#ifndef NEKROMANTA_HH
#define NEKROMANTA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Nekromanta : public karta
{
public:
    Nekromanta(){set = "Czarodziej";}
    string nazwa() const { return "Nekromanta"; }
    int punkty() const { return 3; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        add_card(zestaw);
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Nekromanta(){};
};

#endif

