#ifndef OKRET_HH
#define OKRET_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Okret : public karta
{
public:
    string nazwa() const { return "Okret"; }
    string zestaw() const { return "Bron"; }
    int punkty() const { return 23; }
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