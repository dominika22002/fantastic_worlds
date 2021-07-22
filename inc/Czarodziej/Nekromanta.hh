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
    float premia(Zestaw zestaw) const
    {
        zestaw.add_card();
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        return 0;
    }
    virtual ~Nekromanta(){};
};

#endif

