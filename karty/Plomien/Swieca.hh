#ifndef SWIECA_HH
#define SWIECA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Swieca : public karta
{
public:
    string nazwa() const { return "Swieca"; }
    string zestaw() const { return "Plomien"; }
    int punkty() const { return 2; }
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
