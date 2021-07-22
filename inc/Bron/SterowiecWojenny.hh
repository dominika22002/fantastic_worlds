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
    float premia(Zestaw zestaw) const
    {
        return 0;
    }
    float kara(Zestaw zestaw) const
    {
        if(!zestaw.found("zestaw","Armia"))
            zestaw.inactive_card("SterowiecWojenny");
        if(zestaw.found("zestaw","Pogoda"))
            zestaw.inactive_card("SterowiecWojenny");
        return 0;
    }
    virtual ~SterowiecWojenny(){};
};

#endif