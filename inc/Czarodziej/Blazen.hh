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
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        int odd = how_much_odd(zestaw);
        if (odd == zestaw.size()-1)
        {
            return 50;
        }
        else
            return odd*3;
        
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~Blazen(){};
};

#endif
