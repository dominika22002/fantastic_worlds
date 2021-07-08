#ifndef ELFILUCZNICY_HH
#define ELFILUCZNICY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class ElfiLucznicy : public karta
{
public:
    string nazwa() const { return "ElfiLucznicy"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 10; }
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