#ifndef WIELKIWODZ_HH
#define WIELKIWODZ_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class WielkiWodz : public karta
{
public:
    string nazwa() const { return "WielkiWodz"; }
    string zestaw() const { return "Przywodca"; }
    int punkty() const { return 4; }
    float premia()
    {
        return 0;
    }
    float kara()
    {
        return 0;
    }
};

#endif