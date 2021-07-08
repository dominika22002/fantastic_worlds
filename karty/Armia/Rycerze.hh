#ifndef RYCERZE_HH
#define RYCERZE_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Rycerze : public karta
{
public:
    string nazwa() const { return "Rycerze"; }
    string zestaw() const { return "Armia"; }
    int punkty() const { return 20; }
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