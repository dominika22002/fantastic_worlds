#ifndef WYSPA_HH
#define WYSPA_HH

#include <vector>
#include <iostream>
#include <math.h>
#include <memory>
#include "karta.hh"

using namespace std;
class Wyspa : public karta
{
public:
    string nazwa() const { return "Wyspa"; }
    string zestaw() const { return "Powodz"; }
    int punkty() const { return 14; }
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
