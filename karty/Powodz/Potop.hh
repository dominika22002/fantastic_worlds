#ifndef POTOP_HH
#define POTOP_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Potop : public karta
{
public:
    string nazwa() const { return "Potop"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 32; }
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
