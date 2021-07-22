#ifndef BLAZEN_HH
#define BLAZEN_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Blazen : public karta
{
public:
    Blazen(){set = "Czarodziej";}
    string nazwa() const { return "Blazen"; }
    int punkty() const { return 3; }
    float premia(Zestaw zestaw) const
    {
        int odd = zestaw.how_much_odd();
        if (odd == zestaw.size()-1)
        {
            return 50;
        }
        else
            return odd*3;

    }
    float kara(Zestaw zestaw) const
    {
    return 0;
}
    virtual ~Blazen(){};
};

#endif
