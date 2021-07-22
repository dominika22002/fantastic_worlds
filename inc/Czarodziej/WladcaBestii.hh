#ifndef WLADCABESTII_HH
#define WLADCABESTII_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class WladcaBestii : public karta
{
public:
    WladcaBestii(){set = "Czarodziej";}
    string nazwa() const { return "WladcaBestii"; }
    int punkty() const { return 9; }
    float premia(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    float kara(vector<shared_ptr<karta> > zestaw) const
    {
        return 0;
    }
    virtual ~WladcaBestii(){};
};

#endif