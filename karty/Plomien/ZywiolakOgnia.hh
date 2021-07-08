#ifndef ZYWIOLAKOGNIA_HH
#define ZYWIOLAKOGNIA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class ZywiolakOgnia : public karta
{
public:
    string nazwa() const { return "ZywiolakOgnia"; }
    string zestaw() const { return "Plomien"; }
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
