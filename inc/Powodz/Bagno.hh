#ifndef BAGNO_HH
#define BAGNO_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Bagno : public karta
{
public:
    string nazwa() const { return "Bagno"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 18; }
    float premia(vector<karta *> zestaw) const
    {
        return 0;
    }
    float kara(vector<karta *> zestaw) const
    {
        return 0;
    }
};

#endif
