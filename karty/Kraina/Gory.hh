#ifndef GORY_HH
#define GORY_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Gory : public karta
{
public:
    string nazwa() const { return "Gory"; }
    string zestaw() const { return "Kraina"; }
    int punkty() const { return 9; }
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