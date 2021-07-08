#ifndef KROL_HH
#define KROL_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "../karta.hh"

using namespace std;
class Krol : public karta
{
public:
    string nazwa() const { return "Krol"; }
    string zestaw() const { return "Przywodca"; }
    int punkty() const { return 8; }
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
