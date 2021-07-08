#ifndef BAZYLISZEK_HH
#define BAZYLISZEK_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Bazyliszek : public karta
{
public:
    string nazwa() const { return "Bazyliszek"; }
    string zestaw() const { return "Bestia"; }
    int punkty() const { return 35; }
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