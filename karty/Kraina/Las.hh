#ifndef LAS_HH
#define LAS_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Las : public karta
{
public:
    string nazwa() const { return "Las"; }
    string zestaw() const { return "Kraina"; }
    int punkty() const { return 7; }
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