#ifndef TORNADO_HH
#define TORNADO_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Tornado : public karta
{
public:
    string nazwa() const { return "Tornado"; }
    string zestaw() const { return "Pogoda"; }
    int punkty() const { return 13; }
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