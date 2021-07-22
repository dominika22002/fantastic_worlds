#ifndef STEROWIECWOJENNY_HH
#define STEROWIECWOJENNY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class SterowiecWojenny : public karta
{
public:
    SterowiecWojenny(){set = "Bron";}
    string nazwa() const { return "SterowiecWojenny"; }
    int punkty() const { return 35; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        if(!found("zestaw","Armia",zestaw))
            inactive_card("SterowiecWojenny", zestaw);
        if(found("zestaw","Pogoda",zestaw))
            inactive_card("SterowiecWojenny", zestaw);
        return 0;
    }
    virtual ~SterowiecWojenny(){};
};

#endif